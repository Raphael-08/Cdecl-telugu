from flask import Flask, request, render_template, jsonify
from translation import transt
import subprocess
import re

app = Flask(__name__)


@app.route("/", methods=["GET", 'POST'])
def index():
    if request.method == "POST":
        query = request.form["query"]
        if query:
            # try:
            #     trans_lation, variable, data, length, flag = translate(query)
            # except ValueError:
            #     trans_lation = 'syntax error'
            #     variable = '_'
            #     data = ''
            #     length = '0'
            #     flag = ''
            return jsonify({'output': translate(query)})
        return ({'error': 'Error'})
    return render_template('index.html')


SYNTAX_ERROR = 'syntax error'

command = ['./cdecl']


def translate(query):
    queries = [query, 'explain ' + query+';', 'declare ' + query+';']
    process = subprocess.Popen(
        command,  stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    output, error = process.communicate(input='\n'.join(queries).encode())

    for line in output.split('\n'.encode()):
        if line and line != SYNTAX_ERROR.encode():
            print(line.decode())
            tr = transt(line.decode())
            return tr
            flag = ''
            l = line.decode().split()
            if l[-1] == 'var':
                var, data = l[-1], l[-2]
                l[-1], l[-2] = 'ch1', 'char'
                flag = 'c'
                translator = Translator()
                translation = translator.translate(
                    line.decode(), dest='te').text
                return translation, var, data, line.decode(), flag
            var = l[1]
            l[1] = 'X'
            data = l[-1]
            l[-1] = "char"
            flag = 'c'
            # if len(l)<8:
            #     if len(l)>3:
            #         data= l[-1]
            #         l[-1]="char"
            #     else:
            #         data = l[0]
            #         l[0] = "char"
            if len(l) >= 8:
                # data = l[-1]
                l[-1] = 'char'
                flag = 'c'
                txt = ' '.join(l)
                splt = ' '.join(l).split('(')
                if len(splt) == 2:
                    list_2 = splt[1].split(')')
                    splt[1] = list_2[0].split(',')
                    splt.append(list_2[1])
                # if len(splt)==1:
                #     # g=[l[i:i+4] for i in range(0,len(l),4)]
                #     # print(g)
                #     # splt = [' '.join(j) for j in g]
                #     splt[0] = ' '.join(l[:5])
                #     splt.append(' '.join(l[5:]))

                #     print(splt)
                # li = []
                a = []
                for line_splt in splt:
                    if type(line_splt) == type(l):
                        for i in line_splt:
                            translator = Translator()
                            translation = translator.translate(i, dest='te').text
                            a.append(translation)
                translator = Translator()
                translation = translator.translate(txt, dest='te').text
                substr = data_type['char']
                regex_pat = rf'{substr}(?!.*{substr})'
                txt_ = re.search(regex_pat, txt)
                if len(translation.split()) < 8 or (not txt_):
                    l[-1] = 'float'
                    flag = 'f'
                    txt = ' '.join(l)
                    print(txt)
                    translator = Translator()
                    translation = translator.translate(
                        txt, src='en', dest='te').text
                    print(translation)
                    # li.append(a)
                    # else:
                    #     translator = Translator(service_urls=['translate.google.com'])
                    #     translation = translator.translate(line_splt,src='en', dest='te').text
                    #     print(translation)
                    #     li.append(translation)
                # if len(li)==3:
                #     translation = li[0]+' ('+','.join(li[1])+') '+li[2]
                # else:
                #     translation = ' '.join(li)
                return translation, var, data, ','.join(a), flag
            str1 = ' '.join(l)
            translator = Translator()
            translation = translator.translate(str1, dest='te').text
            return translation, var, data, line.decode(), flag
    else:
        return transt(SYNTAX_ERROR)


if __name__ == "__main__":
    app.run(host="127.0.0.1", port=8080, debug=True)
