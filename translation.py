from langdetect import detect
from indic_transliteration import sanscript
import re


letters = {
    "A": "ఏ", "B": "బీ", "C": "సీ", "D": "డీ",
    "E": "ఈ", "F": "ఎఫ్", "G": "జీ", "H": "హెచ్",
    "I": "ఐ", "J": "జే", "K": "కే", "L": "ఎల్",
    "M": "ఎం", "N": "ఎన్", "O": "ఓ", "P": "పీ",
    "Q": "క్యూ", "R": "ఆర్", "S": "ఎస్", "T": "టీ",
                 "U": "యూ", "V": "వీ", "W": "డబల్యూ", "X": "ఎక్స్",
                 "Y": "వై", "Z": "జెడ్", '0': '0', '1': '1', '2': '2',
                 '3': '3', '4': '4', '5': '5', '6': '6', '7': '7', '8': '8',
                 '9': '9', '_': '_'
}

data_type = {
    "char6 3": "చార్గా", "int6 3": "పూర్ణంగా", "short6 3": "చిన్నదిగా",
    "long6 3": "పెద్దదిగా", "float6 3": "ఫ్లోట్గా", "double6 3": "డబల్గా",
    "void6 3": "ఖాళీగా", "unsigned6 3": "సానుకూల సంఖ్యగా", "signed6 3": "ప్రతికూల సంఖ్యగా",
    "6 3": "గా",

    "char6": "చార్కి", "int6": "పూర్ణంకి", "short6": "చిన్నదికి",
    "long6": "పెద్దదికి", "float6": "ఫ్లోట్కి", "double6": "డబల్కి",
    "void6": "ఖాళీకి", "unsigned6": "సానుకూల సంఖ్యకి", "signed6": "ప్రతికూల సంఖ్యకి",
    "6 ": "కి ",

    "char": "చార్", "int": "పూర్ణం", "short": "చిన్నది",
    "long": "పెద్దది", "float": "ఫ్లోట్", "double": "డబల్",
    "void": "ఖాళీ", "unsigned": "సానుకూల సంఖ్య", "signed": "ప్రతికూల సంఖ్య",

    "pointer to char": "చార్కి పాయింటర్గా", "pointer to int": "పూర్ణంకి పాయింటర్గా",
    "pointer to short": "చిన్నదికి పాయింటర్గా", "pointer to long": "పెద్దదికి పాయింటర్గా",
    "pointer to float": "ఫ్లోట్కి పాయింటర్గా", "pointer to double": "డబల్కి పాయింటర్గా",
    "pointer to void": "ఖాళీకి పాయింటర్గా", "pointer to unsigned": "సానుకూల సంఖ్యకి పాయింటర్గా",
    "pointer to signed": "ప్రతికూల సంఖ్యకి పాయింటర్గా", "args": "ఆర్గ్స్",

    "auto2": "ఆటో", "extern2": "ఎక్స్టర్న్‌ ",
    "static2": "స్టాటిక్‌", "register2": "రిజిస్టర్‌",

    "volatile4": "వోలటైల్‌", "volatile5": "వోలటైల్",
    "const": "స్థిరమైన", "const4": "స్థిరమైన",
    "const5": "స్థిరమైన",

    " as1 ": "ను ",
    "declare": "ప్రకటించండి",
    "pointer to 3": "పాయింటర్గా",
    "pointer to": "పాయింటర్కి",
    "array of": "శ్రేణి యొక్క",
    "array ": " శ్రేణి ",
    " of 3 ": " గా ",
    " of ": " కి ",
    "returning": "రిటర్నింగ్‌",
    "function": "ఫంక్షన్",
    "syntax error": "సింటాక్స్ లోపం",
    "bad character": "చెడు అక్షరం",

    " var": " వార్‌",
    "enum": "ఇనమ్‌",
    "union": "యూనియన్",
    "struct": "నిర్మాణం",

    "": "",
}


def transt(text):

    if text == "syntax error":
        return data_type[text]
    sen_list = text.split()
    var = sen_list[0]

    if sen_list[-1] == "var":
        var = sen_list[-2]
    telugu_text = replace_words_with_values(text, data_type)

    if '(' in telugu_text:
        type_w = typec_eng(telugu_text)
        for i in range(len(type_w)):
            word = type_w[i]
            if re.match(r'^[a-zA-Z]+$', word):
                r = transliterate_english_to_telugu(word)
                type_w[i] = r
                a = telugu_text.split('(')
                if len(a) == 2:
                    b = a[1].split(')')
                telugu_text = a[0]+'('+''.join(type_w)+')'+b[1]
    telugu_text = telugu_text.replace(var, variable(var), 1)

    try:
        eng_w = eng_find(telugu_text)
        telugu_text = telugu_text.replace(eng_w, variable(eng_w))
    except:
        pass

    telugu_text = transt1(telugu_text)
    return telugu_text


def variable(tv):
    if len(tv) > 2:
        tv = transliterate_english_to_telugu(tv)
    if detect(tv) != 'te':
        emptstr = ''
        for i in tv:
            try:
                emptstr += letters[i.upper()]
            except:
                pass
        return emptstr
    else:
        return tv


def replace_words_with_values(string, dictionary):
    pattern = re.compile(r'\b({})\b'.format(
        '|'.join(map(re.escape, dictionary.keys()))))
    replaced_string = pattern.sub(lambda x: dictionary[x.group()], string)
    return replaced_string


def transt1(text):
    text = re.sub(r'6 3', 'గా', text)
    text = re.sub(r'6 ', 'కి ', text)
    text = re.sub(r'కి  శ్రేణి', ' యొక్క శ్రేణి', text)
    telugu_text = replace_words_with_values(text, data_type)
    return telugu_text


def eng_find(text):
    splt = text.split()
    eng_txt = ''
    try:
        for i in splt:
            if re.search(r'\b[a-zA-Z]+\d+\b', i):
                eng_txt = i[:-1]
    except:
        pass
    if eng_txt == '':
        for i in text:
            if i == ' ' or i.isnumeric():
                continue
            if detect(i) != 'te':
                eng_txt += i
    return eng_txt


def transliterate_english_to_telugu(text):
    if len(text) < 3:
        emptstr = ''
        for i in text:
            try:
                emptstr += letters[i.upper()]
            except:
                pass
        return emptstr
    telugu_text = sanscript.transliterate(
        text, sanscript.ITRANS, sanscript.TELUGU)
    return telugu_text


def typec_eng(text):
    pattern = r'\((.*?)\)'
    matches = re.findall(pattern, text)
    return matches[0].split()

# x = input("enter the string:")
# # print("translated string:"+transt(x))
# a,b=transt(x)

# with open("output.txt","a") as f:
#     f.write(a+"\n"+b+"\n")
