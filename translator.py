from flask import Flask, request, render_template, jsonify
from translation import transt
import subprocess

app = Flask(__name__)

@app.route("/", methods=["GET", 'POST'])
def index():
    if request.method == "POST":
        query = request.form["query"]
        if query:
            return jsonify({'output': translate(query)})
        return ({'error': 'Error'})
    return render_template('index.html')


SYNTAX_ERROR = 'syntax error'

command = ['./cdecl']


def translate(query):
    l = ["auto", "extern","static", "register"]
    q_l = query.split()
    if q_l[0] == 'declare' or q_l[0] == 'cast':
        return transt(SYNTAX_ERROR)
    if len(q_l)<3 and q_l[0] in l:
        query = q_l[0]+' '+'int'+' '+q_l[1]
    queries = [query, 'explain ' + query+';', 'declare ' + query+';']
    process = subprocess.Popen(command,  stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    output, error = process.communicate(input='\n'.join(queries).encode())

    for line in output.split('\n'.encode()):
        if line and line != SYNTAX_ERROR.encode():
            print(line.decode())
            tr = transt(line.decode())
            return tr
    else:
        return transt(SYNTAX_ERROR)


if __name__ == "__main__":
    app.run(host="127.0.0.1", port=8080, debug=True)
