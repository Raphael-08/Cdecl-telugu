import subprocess
import os
from functools import lru_cache
from flask import Flask, request, render_template, jsonify
from translation import transt

app = Flask(__name__)


@app.route("/", methods=["GET", "POST"])
def index():
    print(f"translate : {translate.cache_info()}")
    if request.method == "POST":
        query = request.form.get("query")
        if query:
            if query == "help":
                return jsonify({"output": "సింటాక్స్ లోపం"})
            return jsonify({"output": translate(query)})
        return jsonify({"error": "Error"})
    return render_template("index.html")


SYNTAX_ERROR = "syntax error"

current_directory = os.getcwd()
command = [os.path.join(current_directory, "cdecl")]


@lru_cache(None)
def translate(query):
    storage_classes = ["auto", "extern", "static", "register"]
    q_l = query.split()
    if q_l[0] in ("declare", "cast"):
        return transt(SYNTAX_ERROR)
    if len(q_l) < 3 and q_l[0] in storage_classes:
        query = f"{q_l[0]} int {q_l[1]}"
    queries = [query, f"explain {query};", f"declare {query};"]

    translated_text = None
    with subprocess.Popen(
        command, stdin=subprocess.PIPE, stdout=subprocess.PIPE
    ) as process:
        output, _ = process.communicate(input="\n".join(queries).encode())
        print(output, _)
        for line in output.splitlines():
            line = line.decode()
            if line and line != SYNTAX_ERROR:
                print(line)
                translated_text = transt(line)
                break

    return translated_text or transt(SYNTAX_ERROR)


if __name__ == "__main__":
    app.run(host="127.0.0.1", port=5000, debug=True)
