# import re

# letters = {
#     "A": "ఏ","B": "బీ","C": "సీ","D": "డీ",
#     "E": "ఈ","F": "ఎఫ్","G": "జీ","H": "హెచ్",
#     "I": "ఐ","J": "జే","K": "కే","L": "ఎల్",
#     "M": "ఎం","N": "ఎన్","O": "ఓ","P": "పీ",
#     "Q": "క్యూ","R": "ఆర్","S": "ఎస్","T": "టీ",
#     "U": "యూ","V": "వీ","W": "డబల్యూ","X": "ఎక్స్",
#     "Y": "వై","Z": "జెడ్"
# }

# data_type = {
#     "char": "చార్",
#     "int": "పూర్ణం",
#     "short": "చిన్నది",
#     "long": "పెద్దది",
#     "float": "ఫ్లోట్",
#     "double": "డబల్",
#     "void": "ఖాళీ"
# }

# sp_words = {
#     "(ARGS)":"ఆర్గ్స్",
#     "const" :"స్థిరంగా"
# }

# def variable(tv):
#     tv = tv.replace('*', '')
#     splt = list(tv)
#     emptstr = ''
#     for i in splt:
#         emptstr += letters[i.upper()]
#     return emptstr

# def eng_to_telugu(text):
#     if text == "syntax error":
#         return "సింటాక్స్ లోపం"
#     pattern = re.compile(r'\b([a-zA-Z]+)\b')  
#     telugu_text = re.sub(pattern, lambda match: data_type.get(match.group().lower(), match.group()), text)
#     telugu_text = re.sub(pattern, lambda match: sp_words.get(match.group(), match.group()), telugu_text)
#     telugu_text = re.sub(pattern, lambda match: variable(match.group()), telugu_text)
#     return telugu_text
from langdetect import detect
from googletrans import Translator


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
                 "void": "ఖాళీ"
                }
sp_words  = {
                 "(ARGS)":"ఆర్గ్స్",
                 "const" :"స్థిరంగా"
}

def eng_to_telugu(text,var):

    splited_list = text.split()
    eng_word_list =[]

    try:
        for i in splited_list:
            if detect(i)!='te':
                eng_word_list.append(i)
    except :
        return 'సింటాక్స్ లోపం చెడు అక్షరం '+text[-3:]
    
    if eng_word_list:
        if text == 'syntax error':
            return 'సింటాక్స్ లోపం'
        
        if len(eng_word_list)==1:
            reptxt=variable(eng_word_list[0])
            text = text.replace(eng_word_list[0],reptxt,1)
        elif len(eng_word_list)==2:
            reptxt=variable(eng_word_list[1])
            if var=='var':
                text = text.replace(eng_word_list[0],data_type[eng_word_list[0].lower()],1)
                text = text.replace(eng_word_list[1],reptxt,1)
            else:
                text = text.replace(eng_word_list[0],reptxt,1)
                text = text.replace(eng_word_list[1],data_type[eng_word_list[1].lower()],1)
        elif len(eng_word_list)==3:
            reptxt=variable(eng_word_list[0])
            text = text.replace(eng_word_list[0],reptxt,1)
            text = text.replace(eng_word_list[1],sp_words[eng_word_list[1]],1)
            text = text.replace(eng_word_list[2],data_type[eng_word_list[2].lower()],1)
        text = text.replace(variable('ch1'),variable(var),1)
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