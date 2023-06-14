import re
from google.transliteration import transliterate_text

letters = {
    "A": "ఏ",
    "B": "బీ",
    "C": "సీ",
    "D": "డీ",
    "E": "ఈ",
    "F": "ఎఫ్",
    "G": "జీ",
    "H": "హెచ్",
    "I": "ఐ",
    "J": "జే",
    "K": "కే",
    "L": "ఎల్",
    "M": "ఎం",
    "N": "ఎన్",
    "O": "ఓ",
    "P": "పీ",
    "Q": "క్యూ",
    "R": "ఆర్",
    "S": "ఎస్",
    "T": "టీ",
    "U": "యూ",
    "V": "వీ",
    "W": "డబల్యూ",
    "X": "ఎక్స్",
    "Y": "వై",
    "Z": "జెడ్",
    "0": "0",
    "1": "1",
    "2": "2",
    "3": "3",
    "4": "4",
    "5": "5",
    "6": "6",
    "7": "7",
    "8": "8",
    "9": "9",
    "౦": "0",
    "౧": "1",
    "౨": "2",
    "౩": "3",
    "౪": "4",
    "౫": "5",
    "౬": "6",
    "౭": "7",
    "౮": "8",
    "౯": "9",
    "_": "_",
}

data_type = {
    "char$ 3": "చార్గా",
    "int$ 3": "ఇంట్‌గా",
    "short$ 3": "షార్ట్గా",
    "long$ 3": "లాంగ్‌గా",
    "float$ 3": "ఫ్లోట్గా",
    "double$ 3": "డబల్గా",
    "void$ 3": "వోయిడ్‌గా",
    "unsigned$ 3": "అన్సైండ్‌గా",
    "signed$ 3": "సైండ్‌గా",
    "char$  3": "చార్గా",
    "int$  3": "ఇంట్‌గా",
    "short$  3": "షార్ట్గా",
    "long$  3": "లాంగ్‌గా",
    "float$  3": "ఫ్లోట్గా",
    "double$  3": "డబల్గా",
    "void$  3": "వోయిడ్‌గా",
    "unsigned$  3": "అన్సైండ్‌గా",
    "signed$  3": "సైండ్‌గా",
    "char$ 7": "చార్లోకి",
    "int$ 7": "ఇంట్‌లోకి",
    "short$ 7": "షార్ట్లోకి",
    "long$ 7": "లాంగ్‌లోకి",
    "float$ 7": "ఫ్లోట్లోకి",
    "double$ 7": "డబల్లోకి",
    "void$ 7": "వోయిడ్‌లోకి",
    "unsigned$ 7": "అన్సైండ్‌లోకి",
    "signed$ 7": "సైండ్‌లోకి",
    "char$  7": "చార్లోకి",
    "int$  7": "ఇంట్‌లోకి",
    "short$  7": "షార్ట్లోకి",
    "long$  7": "లాంగ్‌లోకి",
    "float$  7": "ఫ్లోట్లోకి",
    "double$  7": "డబల్లోకి",
    "void$  7": "వోయిడ్‌లోకి",
    "unsigned$  7": "అన్సైండ్‌లోకి",
    "signed$  7": "సైండ్‌లోకి",
    "char$ ": "చార్కి ",
    "int$ ": "ఇంట్‌కి ",
    "short$ ": "షార్ట్కి ",
    "long$ ": "లాంగ్‌కి ",
    "float$ ": "ఫ్లోట్కి ",
    "double$ ": "డబల్కి ",
    "void$ ": "వోయిడ్‌కి ",
    "unsigned$ ": "అన్సైండ్‌కి ",
    "signed$ ": "సైండ్‌కి ",
    "char$  ": "చార్కి ",
    "int$  ": "ఇంట్‌కి ",
    "short$  ": "షార్ట్కి ",
    "long$  ": "లాంగ్‌కి ",
    "float$  ": "ఫ్లోట్కి ",
    "double$  ": "డబల్కి ",
    "void$  ": "వోయిడ్‌కి ",
    "unsigned$  ": "అన్సైండ్‌కి  ",
    "signed$  ": "సైండ్‌కి ",
    "char": "చార్",
    "int": "ఇంట్‌",
    "short": "షార్ట్",
    "long": "లాంగ్‌",
    "float": "ఫ్లోట్",
    "double": "డబల్",
    "void": "వోయిడ్‌",
    "unsigned": "అన్సైండ్‌",
    "signed": "సైండ్‌",
    "auto2": "ఆటో",
    "extern2": "ఎక్స్టర్న్‌ ",
    "static2": "స్టాటిక్‌",
    "register2": "రిజిస్టర్‌",
    "volatile": "వోలటైల్‌",
    "volatile4": "వోలటైల్‌",
    "volatile5": "వోలటైల్",
    "const": "కాంస్ట్‌",
    "const4": "కాంస్ట్‌",
    "const5": "కాంస్ట్‌",
    " as1": "ను",
    " 0into4 ": "ను ",
    "declare": "ప్రకటించండి",
    "cast": "ప్రసారం చేయండి",
    "pointer to 7": " పాయింటర్లోకి",
    "pointer to  7": " పాయింటర్లోకి",
    "pointer to 3": "పాయింటర్గా",
    "pointer to": "పాయింటర్కి",
    "pointer": "పాయింటర్",
    "reference to 3": "రెఫరెన్స్‌గా",
    "reference to": "రెఫరెన్స్‌కి",
    "reference": "రెఫరెన్స్‌",
    "member of": "యొక్క మెంబర్‌కి",
    "array of 3": "శ్రేణిగా",
    "array": " శ్రేణి",
    " of 3 ": " గా ",
    "of": "కి",
    "returning": "రిటర్నింగ్‌",
    "function": "ఫంక్షన్",
    "syntax error": "సింటాక్స్ లోపం",
    "bad character": "చెడు అక్షరం",
    "block": "బ్లాక్",
    " var": " వార్‌",
    "enum": "ఇనమ్‌",
    "union": "యూనియన్",
    "struct": "స్ట్రక్ట్‌",
    "class": "క్లాస్‌",
    "": "",
}


def preprocess_text(text):
    text = args_restruct(text)
    print(text)
    text1 = text
    sen_list = text.split()
    var = sen_list[0]
    if sen_list[-1] == "declare":
        text = declare_restruct(text)
        if re.search(r"pointer to member of class", text):
            text = class_restructd(text1)
    if sen_list[-1] == "cast":
        text = cast_restruct(text)
        var = cast_var(text)
        if re.search(r"pointer to member of class", text):
            text = class_restructc(text)
    return text, var


def translate_text(text, var):
    telugu_text = replace_words_with_values(text, data_type)
    telugu_text = arg_var(telugu_text)
    if telugu_text.endswith(data_type["cast"]):
        telugu_text = replace_last_occurrence(telugu_text, var, variable(var))
    else:
        telugu_text = telugu_text.replace(var, variable(var), 1)
    telugu_text = user_def_var(telugu_text)
    telugu_text = transt1(telugu_text)
    return telugu_text


def transt(text):
    if text == "syntax error":
        return data_type[text]
    if "bad character" in text:
        return f"సింటాక్స్ లోపం చెడు అక్షరం {text[-3:]}"

    text, var = preprocess_text(text)
    telugu_text = translate_text(text, var)

    return telugu_text


# ----------------------preprocess functions


def args_restruct(text1):
    if "(" in text1:
        list1 = list2 = ""
        pattern = r"function\s*(?:\([^)]*\))?\s*returning | block\s*(?:\([^)]*\))?\s*returning"
        matches = re.findall(pattern, text1)
        print(matches)
        for index, word in enumerate(matches):
            list1 = word.split("(")
            if len(list1) == 2:
                list2 = list1[1].split(")")
                splt = list2[0].split(",")
                for index1, arg in enumerate(splt):
                    text = data = func = ""
                    data_pattern = r"\bto\s(?!.*\bto\b)(.*)$"
                    func_pattern = r"function returning"
                    data_pattern1 = r"\bof\s(?!.*\bto\b)(.*)$"
                    match = re.search(data_pattern, arg)
                    if match:
                        result = match.group()
                        text = re.sub(data_pattern, "", arg)
                        data = f"{' '.join(result.split()[1:])}$"
                    else:
                        match = re.search(data_pattern1, arg)
                        if match:
                            result = match.group()
                            text = re.sub(data_pattern1, "", arg)
                            data = f"{' '.join(result.split()[1:])}$"

                    match1 = re.search(func_pattern, arg)
                    if match1:
                        result = match1.group()
                        func = result
                        text = re.sub(func_pattern, f"{func} {data}", text)
                    else:
                        text = f"{data} {text}"
                    if text in ("", " "):
                        text = splt[index1]
                    splt[index1] = text.strip()
                text1 = text1.replace(
                    matches[index], f"{list1[0]}({','.join(splt)}){list2[1]}"
                )
    return text1


def declare_restruct(string):
    pattern = r"function\s*(?:\([^)]*\))?\s*returning"
    match = re.findall(pattern, string)
    match1 = re.search(r"\^(.*?)\$", string)
    if match:
        updated_string = string.replace(match1.group()[1:], "", 1)
        string = replace_last_occurrence(
            updated_string, match[-1], f"{match[-1]} {match1.group()[1:]}"
        )
    text = string.split("^")
    return F"{text[0]} {text[1]}"


def cast_restruct(string):
    pattern = r"function\s*(?:\([^)]*\))?\s*returning | block\s*(?:\([^)]*\))?\s*returning"
    match = re.search(pattern, string)
    if match:
        extracted_string = match.group(0)
        updated_string = re.sub(pattern, "", string)
        return extracted_string + " " + updated_string
    return string


def cast_var(string):
    pattern = r"7\s+(\w+)\s+0"
    match = re.search(pattern, string)
    extracted_word = ""
    if match:
        extracted_word = match.group(1)
    return extracted_word


def class_restructd(text1):
    match = re.search(r"\^(.*?)\$", text1)
    data = f"{match.group(1)}$"
    matches = re.findall(r"\bclass\s+(\w+)", text1)
    text1 = text1.replace(f"^{data}", "^")
    match = re.findall(r"function\s*(?:\([^)]*\))?\s*returning", text1)
    if match:
        updated_string = replace_last_occurrence(text1, match[-1], "##")
        text1 = updated_string.replace("##", match[-1] + " " + data)
        text1 = text1.replace(
            f"pointer to member of class {matches[-1]}",
            f"class {matches[-1]} member of pointer to",
            1,
        )
        return text1.replace("^ ", "")
    second_class = text1.split(matches[-1])
    text1 = f"{second_class[0]}{matches[-1]} {data}{second_class[-1]}"
    text1 = text1.replace(
        f"pointer to member of class {matches[-1]}",
        f"class {matches[-1]} member of pointer to",
        1,
    )
    return text1.replace("^ ", "")


def class_restructc(text):
    matches = re.findall(r"\bclass\s+(\w+)", text)
    text = text.replace(
        f"pointer to member of class {matches[-1]}",
        f"class {matches[-1]} member of pointer to",
        1,
    )
    return text


# ----------------------translate functions


def replace_words_with_values(string, dictionary):
    pattern = re.compile(rf"\b({'|'.join(map(re.escape, dictionary.keys()))})\b")
    replaced_string = pattern.sub(lambda x: dictionary[x.group()], string)
    return replaced_string


def user_def_var(text):
    matches = re.findall(r"\bస్ట్రక్ట్‌\s+(\w+)", text)
    if matches:
        for i in matches:
            text = text.replace(f"స్ట్రక్ట్‌ {i}", f"స్ట్రక్ట్‌ {variable(i)}", 1)
    matches1 = re.findall(r"\bయూనియన్\s+(\w+)", text)
    if matches1:
        for i in matches1:
            text = text.replace(f"యూనియన్ {i}", f"యూనియన్ {variable(i)}", 1)
    matches2 = re.findall(r"\bఇనమ్‌\s+(\w+)", text)
    if matches2:
        for i in matches2:
            text = text.replace(f"ఇనమ్‌ {i}", f"ఇనమ్‌ {variable(i)}", 1)
    matches3 = re.findall(r"\bక్లాస్‌\s+(\w+)", text)
    if matches3:
        for i in matches3:
            text = text.replace(f"క్లాస్‌ {i}", f"క్లాస్‌ {variable(i)}", 1)
    return text


def typec_eng(text):
    pattern = r"\((.*?)\)"
    matches = re.search(pattern, text)
    return matches.group(1).strip() if matches else None


def arg_var(telugu_text):
    if "(" in telugu_text:
        pattern = r"ఫంక్షన్\s*(?:\([^)]*\))?\s*రిటర్నింగ్‌"
        matches = re.findall(pattern, telugu_text)
        pattern1 = r"బ్లాక్\s*(?:\([^)]*\))?\s*రిటర్నింగ్‌"
        matches1 = re.findall(pattern1, telugu_text)
        matches = matches + matches1
        for index, fun in enumerate(matches):
            type_w = typec_eng(fun)
            if type_w:
                splt = type_w.split(",")
                for index1, args in enumerate(splt):
                    word = args.strip()
                    if re.match(r"^[a-zA-Z0-9]+$", word):
                        transliterated_word = variable(word)
                        splt[index1] = transliterated_word
                if matches[index].startswith("బ్లాక్"):
                    telugu_text = telugu_text.replace(
                        matches[index], f"బ్లాక్({','.join(splt)})రిటర్నింగ్", 1
                    )
                else:
                    telugu_text = telugu_text.replace(
                        matches[index], f"ఫంక్షన్({','.join(splt)})రిటర్నింగ్", 1
                    )
    return telugu_text


def replace_last_occurrence(text, old_word, new_word):
    words = text.rsplit(old_word, 1)
    replaced_text = new_word.join(words)
    return replaced_text


def variable(text):
    result = ""
    if len(text) > 3:
        text = transliterate_text(text, lang_code="te")
        for char in text:
            if char in letters:
                result += letters[char]
            else:
                result += char
        return result
    emptstr = ""
    for i in text:
        emptstr += letters[i.upper()]
    return emptstr


def transt1(text):
    text = re.sub(r"\$ 3", "గా", text)
    text = re.sub(r"\$ ", "కి ", text)
    text = re.sub(r"\$  ", "కి ", text)
    text = re.sub(r"కి  3", "గా", text)
    text = re.sub(r"కి  శ్రేణి", " యొక్క శ్రేణి", text)
    text = re.sub(r"కి శ్రేణి", " యొక్క శ్రేణి", text)
    telugu_text = replace_words_with_values(text, data_type)
    return telugu_text
