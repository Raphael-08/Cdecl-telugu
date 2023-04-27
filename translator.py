from flask import Flask, request, render_template,jsonify
from googletrans import Translator
from transt import eng_to_telugu
import subprocess

app = Flask(__name__)

@app.route("/",methods =["GET",'POST'])
def index():
    if request.method == "POST":
        query = request.form["query"]
        if query:
            return jsonify({'output':eng_to_telugu(translate(query))})
        return({'error':'Error'})
    return render_template('index.html')

SYNTAX_ERROR = 'syntax error'

command = ['./cdecl']

def translate(query):
    queries = [query, 'explain ' + query+';', 'declare ' + query+';']
    process = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    output, error = process.communicate(input = '\n'.join(queries).encode())

    for line in output.split('\n'.encode()):
        if line and line != SYNTAX_ERROR.encode():
            translator = Translator(service_urls=['translate.google.com'])
            translation = translator.translate(line.decode(), dest='te').text
            return translation
    else:
        return SYNTAX_ERROR

if __name__ == "__main__":
    app.run(host = "127.0.0.1",port = 8080, debug = True)