from googletrans import Translator
from langdetect import detect
import re

# letters = {
#     "A": "ఏ","B": "బీ","C": "సీ","D": "డీ",
#     "E": "ఈ","F": "ఎఫ్","G": "జీ","H": "హెచ్",
#     "I": "ఐ","J": "జే","K": "కే","L": "ఎల్",
#     "M": "ఎం","N": "ఎన్","O": "ఓ","P": "పీ",
#     "Q": "క్యూ","R": "ఆర్","S": "ఎస్","T": "టీ",
#     "U": "యూ","V": "వీ","W": "డబల్యూ","X": "ఎక్స్",
#     "Y": "వై","Z": "జెడ్",'0':'0','1':'1','2':'2',
#     '3':'3','4':'4','5':'5','6':'6','7':'7','8':'8',
#     '9':'9','_':'_'
# }

# data_type = {
#                  "char": "చార్",
#                  "int": "పూర్ణం",
#                  "short": "చిన్నది",
#                  "long": "పెద్దది",
#                  "float": "ఫ్లోట్",
#                  "double": "డబల్",
#                  "void": "ఖాళీ",
#                  "unsigned":"సానుకూల సంఖ్య",
#                  "signed":"ప్రతికూల సంఖ్య",
#                  "struct":"నిర్మాణం",
#                  "(args)":"(ఆర్గ్స్)",
#                  "const" :"స్థిరంగా",
#                  "counst":"స్థిరంగా",
#                  "ch1":"ch1",
#                  "":""
#                 }
# def variable(tv):
#     translator = Translator(service_urls=['translate.google.com'])
#     tv = translator.translate(tv, dest='te').text
#     if detect(tv)!='te':
#         tv=tv.replace('*','')
#         splt=list(tv)
#         emptstr=''
#         for i in splt:
#                 emptstr+=letters[i.upper()]
#         return emptstr
#     else:
#         return tv

# def eng_to_telugu(text,var,d_type,eng_txt):
#     print(text,var,d_type)

#     if text == "syntax error":
#         return "సింటాక్స్ లోపం"
#     if eng_txt[:13]=="bad character" :
#         return 'సింటాక్స్ లోపం చెడు అక్షరం '+eng_txt[-3:]

#     # telugu_text = re.sub(pattern, lambda match: sp_words.get(match.group(), match.group()), telugu_text)
#     telugu_text = re.sub(pattern, lambda match: variable(match.group()), telugu_text)
#     substr = data_type['char']
#     regex_pat = rf'{substr}(?!.*{substr})'
#     telugu_text = re.sub(regex_pat,data_type[d_type],text)
#     telugu_text  = re.sub('CH1',variable(var)+'ను',text)
#     print(telugu_text)
#     telugu_text  = re.sub(' ను ',' ',text)
#     print(telugu_text)
#     telugu_text  = re.sub('CH1',variable(var)+'ను',text)

#     return telugu_text
# import re


letters   = {
                 "A": "ఏ","B": "బీ","C": "సీ","D": "డీ",
                 "E": "ఈ","F": "ఎఫ్","G": "జీ","H": "హెచ్",
                 "I": "ఐ","J": "జే","K": "కే","L": "ఎల్",
                 "M": "ఎం","N": "ఎన్","O": "ఓ","P": "పీ",
                 "Q": "క్యూ","R": "ఆర్","S": "ఎస్","T": "టీ",
                 "U": "యూ","V": "వీ","W": "డబల్యూ","X": "ఎక్స్",
                 "Y": "వై","Z": "జెడ్",'0':'0','1':'1','2':'2',
                 '3':'3','4':'4','5':'5','6':'6','7':'7','8':'8',
                 '9':'9','_':'_'
                }
data_type = {
                 "char": "చార్",
                 "int": "పూర్ణం",
                 "short": "చిన్నది",
                 "long": "పెద్దది",
                 "float": "ఫ్లోట్",
                 "double": "డబల్",
                 "void": "ఖాళీ",
                 "unsigned":"సానుకూల సంఖ్య",
                 "signed":"ప్రతికూల సంఖ్య",
                 "struct":"నిర్మాణం",
                 "(args)":"(ఆర్గ్స్)",
                 "const" :"స్థిరంగా",
                 "counst":"స్థిరంగా",
                 "chant" : "స్థిరంగా",
                 "ch1":"ch1",
                 "":""
                }


def eng_to_telugu(text,var,d_type,sub_txt):
    print(text,sub_txt)
    splited_list = text.split()
    eng_word_list =[]

    try:
        for i in splited_list:
            if i.isnumeric():
                continue
            if detect(i)!='te':
                eng_word_list.append(i)
    except :
        return 'సింటాక్స్ లోపం చెడు అక్షరం '+text[-3:]
    
    if eng_word_list:
        if text == 'syntax error':
            return 'సింటాక్స్ లోపం'
        print(eng_word_list)
        if len(eng_word_list)==1:
            reptxt=variable(eng_word_list[0])
            text = text.replace(eng_word_list[0],reptxt,1)
        elif len(eng_word_list)==2:
            if var=='var' or eng_word_list[1] == 'CH1':
                reptxt=variable(eng_word_list[1])
                text = text.replace(eng_word_list[0],data_type[eng_word_list[0].lower()],1)
                text = text.replace(eng_word_list[1],reptxt,1)
            else:
                reptxt=variable(eng_word_list[0])
                text = text.replace(eng_word_list[0],reptxt,1)
                text = text.replace(eng_word_list[1],data_type[eng_word_list[1].lower()],1)
        elif len(eng_word_list)==3: 
            if var == 'var':
                reptxt=variable(eng_word_list[2])
                text = text.replace(eng_word_list[2],reptxt,1)
                text = text.replace(eng_word_list[1],data_type[eng_word_list[1]],1)
                text = text.replace(eng_word_list[0],data_type[eng_word_list[0].lower()],1)
            else:
                reptxt=variable(eng_word_list[0])
                text = text.replace(eng_word_list[0],reptxt,1)
                text = text.replace(eng_word_list[1],data_type[eng_word_list[1]],1)
                text = text.replace(eng_word_list[2],data_type[eng_word_list[2].lower()],1)
        text = text.replace(variable('ch1'),variable(var),1)
        pattern = re.compile(r'\b([a-zA-Z]+)\b')  
        text = re.sub(pattern, lambda match: data_type.get(match.group().lower(), match.group()), text)
        substr = data_type['char']
        regex_pat = rf'{substr}(?!.*{substr})'
        text = re.sub(regex_pat,data_type[d_type],text)
        text  = re.sub('CH1',variable(var),text)
        text  = re.sub('Ch1',variable(var),text)

        splt=text.split('(')
        print(splt)
        if len(splt)==2:
            list_2 = splt[1].split(')')
            splt[1]=list_2[0]
            print(list_2)
            splt.append(list_2[1])
            text = splt[0]+'('+sub_txt+')'+splt[2]
            print(text)
            text = re.sub('Int',data_type['int'],text)

        # text  = re.sub('to const char',data_type['const']+' '+data_type[d_type]+' కు',text)
        # text  = re.sub('const',data_type['const'],text)
        # text = text.replace(data_type['char'],data_type[d_type],1)
        return text
    else:
        return text
 



def variable(tv):
    translator = Translator(service_urls=['translate.google.com'])
    tv = translator.translate(tv, dest='te').text
    if detect(tv)!='te':
        tv=tv.replace('*','')
        splt=list(tv)
        emptstr=''
        for i in splt:
                emptstr+=letters[i.upper()]
        return emptstr
    else:
        return tv