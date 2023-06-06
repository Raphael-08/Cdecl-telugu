from langdetect import detect
from google.transliteration import transliterate_text
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
    "char$ 3": "చార్గా", "int$ 3": "పూర్ణంగా", "short$ 3": "చిన్నదిగా",
    "long$ 3": "పెద్దదిగా", "float$ 3": "ఫ్లోట్గా", "double$ 3": "డబల్గా",
    "void$ 3": "ఖాళీగా", "unsigned$ 3": "సానుకూల సంఖ్యగా", "signed$ 3": "ప్రతికూల సంఖ్యగా",

    "char$  3": "చార్గా", "int$  3": "పూర్ణంగా", "short$  3": "చిన్నదిగా",
    "long$  3": "పెద్దదిగా", "float$  3": "ఫ్లోట్గా", "double$  3": "డబల్గా",
    "void$  3": "ఖాళీగా", "unsigned$  3": "సానుకూల సంఖ్యగా", "signed$  3": "ప్రతికూల సంఖ్యగా",
    
    "char$ ": "చార్కి ", "int$ ": "పూర్ణంకి ", "short$ ": "చిన్నదికి ",
    "long$ ": "పెద్దదికి ", "float$ ": "ఫ్లోట్కి ", "double$ ": "డబల్కి ",
    "void$ ": "ఖాళీకి ", "unsigned$ ": "సానుకూల సంఖ్యకి ", "signed$ ": "ప్రతికూల సంఖ్యకి ",

    "char$  ": "చార్కి ", "int$  ": "పూర్ణంకి ", "short$  ": "చిన్నదికి ",
    "long$  ": "పెద్దదికి ", "float$  ": "ఫ్లోట్కి ", "double$  ": "డబల్కి ",
    "void$  ": "ఖాళీకి ", "unsigned$  ": "సానుకూల సంఖ్యకి  ", "signed$ ": "ప్రతికూల సంఖ్యకి ",

    "char": "చార్", "int": "పూర్ణం", "short": "చిన్నది",
    "long": "పెద్దది", "float": "ఫ్లోట్", "double": "డబల్",
    "void": "ఖాళీ", "unsigned": "సానుకూల సంఖ్య", "signed": "ప్రతికూల సంఖ్య",

    "auto2": "ఆటో", "extern2": "ఎక్స్టర్న్‌ ",
    "static2": "స్టాటిక్‌", "register2": "రిజిస్టర్‌",

    "volatile": "వోలటైల్‌", "volatile4": "వోలటైల్‌", "volatile5": "వోలటైల్",
    "const": "స్థిరమైన", "const4": "స్థిరమైన", "const5": "స్థిరమైన",

    " as1": "ను",
    " 0into4 ": "ను ",
    "declare": "ప్రకటించండి",
    "cast": "ప్రసారం చేయండి",
    "pointer to 7": " పాయింటర్లోకి",
    " pointer to  7": " పాయింటర్లోకి",
    "pointer to 3": "పాయింటర్గా",
    "pointer to": "పాయింటర్కి",
    "pointer":"పాయింటర్",
    "reference to 3": "రెఫరెన్స్‌గా",
    "reference to": "రెఫరెన్స్‌కి",
    "member of":"యొక్క మెంబర్‌కి",
    "array of 3": "శ్రేణిగా",
    "array ": " శ్రేణి ",
    " of 3 ": " గా ",
    "of": "కి",
    "returning": "రిటర్నింగ్‌",
    "function": "ఫంక్షన్",
    "syntax error": "సింటాక్స్ లోపం",
    "bad character": "చెడు అక్షరం",

    " var": " వార్‌",
    "enum": "ఇనమ్‌",
    "union": "యూనియన్",
    "struct": "నిర్మాణం",
    "class": "క్లాస్‌",

    "": "",
}


def transt(text):
    text = args_restruct(text)
    text1 = text
    print(text)
    if text == "syntax error":
        return data_type[text]

    sen_list = text.split()
    var = sen_list[0]

    if sen_list[-1] == 'declare':
        text = declare_restruct(text)
        if re.search(r'pointer to member of class', text):
            text = class_restructd(text1)
    
    if sen_list[-1] == 'cast':
        text = cast_restruct(text)
        var = cast_var(text)
        if re.search(r'pointer to member of class', text):
            text = class_restructc(text)

    if sen_list[-1] == "var":
        var = sen_list[-2]
    
    telugu_text = replace_words_with_values(text, data_type)

    telugu_text = arg_var(telugu_text)

    telugu_text = telugu_text.replace(var, variable(var), 1)

    try:
        eng_w = eng_find(telugu_text)
        telugu_text = telugu_text.replace(eng_w, variable(eng_w))
    except:
        pass
    telugu_text = transt1(telugu_text)
    return telugu_text


def variable(tv):
    if detect(tv) != 'te':
        tv = transliterate_english_to_telugu(tv)
        return tv
    else:
        return tv


def replace_words_with_values(string, dictionary):
    pattern = re.compile(r'\b({})\b'.format(
        '|'.join(map(re.escape, dictionary.keys()))))
    replaced_string = pattern.sub(lambda x: dictionary[x.group()], string)
    return replaced_string


def transt1(text):
    text = re.sub(r'$ 3', 'గా', text)
    text = re.sub(r'$ ', 'కి ', text)
    text = re.sub(r'$  ', 'కి ', text)
    text = re.sub(r'కి  3', 'గా', text)
    text = re.sub(r'కి  శ్రేణి', ' యొక్క శ్రేణి', text)
    text = re.sub(r'కి శ్రేణి', ' యొక్క శ్రేణి', text)
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
    if len(text) > 2:
        text = transliterate_text(text, lang_code='te')
        print(text)
    if detect(text)!='te':    
            emptstr = ''
            for i in text:
                try:
                    emptstr += letters[i.upper()]
                except:
                    pass
            return emptstr
    return text

def typec_eng(text):
    pattern = r'\((.*?)\)'
    matches = re.findall(pattern, text)
    return matches[0].split(',')


def cast_restruct(string):
    pattern = r'function\s*(?:\([^)]*\))?\s*returning'
    match = re.search(pattern, string)
    if match:
        extracted_string = match.group(0)
        updated_string = re.sub(pattern, '', string)
        return extracted_string+" "+updated_string
    else:
        return string


def declare_restruct(string):
    pattern = r'function\s*(?:\([^)]*\))?\s*returning'
    match = re.search(pattern, string)
    if match:
        extracted_string = match.group(0)
        updated_string = re.sub(pattern, '', string)
        updated_string = updated_string.split('^')
        return updated_string[0]+extracted_string+" "+updated_string[1]
    else:
        a = string.split('^')
        return a[0]+' '+a[1]

def cast_var(string):
    pattern = r'7\s+(\w+)\s+0'
    match = re.search(pattern, string)
    if match:
        extracted_word = match.group(1)
        print(extracted_word)
        return extracted_word
    
def class_restructd(text1):
    match = re.search(r'\^(.*?)$',text1)
    data = match.group(1)+'$'
    matches = re.findall(r'\bclass\s+(\w+)', text1)
    text1 = text1.replace('^'+data,'^')
    match = re.search(r'function\s*(?:\([^)]*\))?\s*returning', text1)
    if match:
        extracted_string = match.group(0)
        updated_string = re.sub(r'function\s*(?:\([^)]*\))?\s*returning', '##', text1)
        text1 = updated_string.replace('##',extracted_string+' '+data)
        text1= text1.replace('pointer to member of class '+matches[-1],'class '+variable(matches[-1])+' member of pointer to',1)
        return text1.replace('^ ','')
    else:
        sp = text1.split(matches[-1])
        text1= sp[0]+matches[-1]+' '+data+sp[-1]
        text1= text1.replace('pointer to member of class '+matches[-1],'class '+variable(matches[-1])+' member of pointer to',1)
        return text1.replace('^ ','')

def class_restructc(text):
    matches = re.findall(r'\bclass\s+(\w+)', text)
    text= text.replace('pointer to member of class '+matches[0],'class '+variable(matches[0])+' member of pointer to',1)
    return text

def arg_var(telugu_text):
    if '(' in telugu_text:
        type_w = typec_eng(telugu_text)
        for i in range(len(type_w)):
            word = type_w[i].strip()
            if re.match(r'^[a-zA-Z0-9]+$', word):
                r = transliterate_english_to_telugu(word)
                type_w[i] = r
            a = telugu_text.split('(')
            if len(a) == 2:
                b = a[1].split(')')
            telugu_text = a[0]+'('+','.join(type_w)+')'+b[1]
        return telugu_text
    else:
        return telugu_text

def args_restruct(text):
    list1 = ''
    list2 = ''
    if '(' in text:
        list1 = text.split('(')
        if len(list1)==2:
            list2 = list1[1].split(')')
            splt = list2[0].split(',')
            for i in range(len(splt)):    
                text = data = func = ""
                data_pattern = r"\bto\s(?!.*\bto\b)(.*)$"
                func_pattern = r"function returning"
                data_pattern1 = r"\bof\s(?!.*\bto\b)(.*)$"
                match = re.search(data_pattern, splt[i])
                if match:
                    result = match.group()
                    text = re.sub(data_pattern, "", splt[i])
                    data = " ".join(result.split()[1:]) + "$"
                else:
                    match = re.search(data_pattern1, splt[i])
                    if match:
                        result = match.group()
                        text = re.sub(data_pattern1, "", splt[i])
                        data = " ".join(result.split()[1:]) + "$"

                match1 = re.search(func_pattern, splt[i])
                if match1:
                    result = match1.group()
                    func = result
                    text = re.sub(func_pattern, func + " " + data, text)
                else:
                    text = data + " " + text

                if text == '' or text == ' ':
                    text = splt[i]

                splt[i] = text.strip()
            
            return list1[0]+'('+','.join(splt)+')'+list2[1]
    else:
        return text
