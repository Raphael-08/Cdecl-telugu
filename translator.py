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
            try:
                trans_lation,variable,data,length=translate(query)
            except ValueError:
                trans_lation ='syntax error'
                variable = '_'
                data=''
                length=0
            return jsonify({'output':eng_to_telugu(trans_lation,variable,data,length)})
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
            print(line.decode())
            l = line.decode().split()
            if l[-1]=='var':
                var,data=l[-1],l[-2]
                l[-1],l[-2]='ch1','char'
                translator = Translator(service_urls=['translate.google.com'])
                translation = translator.translate(line.decode(),src='en', dest='te').text
                return translation,var,data,len(l)
            var = l[1]
            l[1] = 'ch1'
            data = ''
            if len(l)<8:
                if len(l)>3:
                    data= l[-1]
                    l[-1]="char"
                else:
                    data = l[0]
                    l[0] = "char"
            if len(l)>=8:
                data = l[-1]
                l[-1] = 'char'
                splt=' '.join(l).split('(')
                if len(splt)==2:
                    list_2 = splt[1].split(')')
                    splt[1]=list_2[0].split(',')
                    splt.append(list_2[1])
                print(splt)
                if len(splt)==1:
                    # g=[l[i:i+4] for i in range(0,len(l),4)]
                    # print(g)
                    # splt = [' '.join(j) for j in g]
                    splt[0] = ' '.join(l[:5])
                    splt.append(' '.join(l[5:]))

                    print(splt)
                li = []
                a=[]
                for line_splt in splt:
                    if type(line_splt) == type(l):
                        for i in line_splt:
                            translator = Translator(service_urls=['translate.google.com'])
                            translation = translator.translate(i,src='en', dest='te').text
                            a.append(translation)
                        li.append(a)
                    else:
                        translator = Translator(service_urls=['translate.google.com'])
                        translation = translator.translate(line_splt,src='en', dest='te').text
                        print(translation)
                        li.append(translation)
                if len(li)==3:
                    translation = li[0]+' ('+','.join(li[1])+') '+li[2]
                else:
                    translation = ' '.join(li)
                return translation,var,data,len(l)
            str =' '.join(l)
            translator = Translator(service_urls=['translate.google.com'])
            translation = translator.translate(str,src='en', dest='te').text
            print(translation)
            return translation,var,data,len(l)
    else:
        return SYNTAX_ERROR

if __name__ == "__main__":
    app.run(host = "127.0.0.1",port = 8080, debug = True)