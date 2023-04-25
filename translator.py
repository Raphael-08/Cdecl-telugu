from flask import Flask, request, render_template
from googletrans import Translator
import subprocess

app = Flask(__name__)

@app.route("/")
def index():
    query = request.args.get("query","")
    if query:
        t = translate(query)
    else:
        t = ""
    data = {'data':t,'query':query}
    return (
         render_template('index.html',data=data)
    )
# query = input("enter input :")
SYNTAX_ERROR = 'syntax error'

command = ['./cdecl']

def translate(query):
    queries = [query, 'explain ' + query, 'declare ' + query]
    process = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    output, error = process.communicate(input = '\n'.join(queries).encode())

    for line in output.split('\n'.encode()):
        if line and line != SYNTAX_ERROR.encode():
            translator = Translator(service_urls=['translate.google.com'])
            translation = translator.translate(line.decode(), dest='te').text
            return translation
if __name__ == "__main__":
    app.run(host = "127.0.0.1",port = 8080, debug = True)