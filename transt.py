import re

letters = {
    "A": "ఏ","B": "బీ","C": "సీ","D": "డీ",
    "E": "ఈ","F": "ఎఫ్","G": "జీ","H": "హెచ్",
    "I": "ఐ","J": "జే","K": "కే","L": "ఎల్",
    "M": "ఎం","N": "ఎన్","O": "ఓ","P": "పీ",
    "Q": "క్యూ","R": "ఆర్","S": "ఎస్","T": "టీ",
    "U": "యూ","V": "వీ","W": "డబల్యూ","X": "ఎక్స్",
    "Y": "వై","Z": "జెడ్"
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

sp_words = {
    "(ARGS)":"ఆర్గ్స్",
    "const" :"స్థిరంగా"
}

def variable(tv):
    tv = tv.replace('*', '')
    splt = list(tv)
    emptstr = ''
    for i in splt:
        emptstr += letters[i.upper()]
    return emptstr

def eng_to_telugu(text):
    if text == "syntax error":
        return "సింటాక్స్ లోపం"
    pattern = re.compile(r'\b([a-zA-Z]+)\b')  
    telugu_text = re.sub(pattern, lambda match: data_type.get(match.group().lower(), match.group()), text)
    telugu_text = re.sub(pattern, lambda match: sp_words.get(match.group(), match.group()), telugu_text)
    telugu_text = re.sub(pattern, lambda match: variable(match.group()), telugu_text)
    return telugu_text