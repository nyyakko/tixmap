import os
import sys

WILDCARDS = {
    "!PROJECT_TEMPLATE!": sys.argv[1] if len(sys.argv) >= 2 else 'console',
    "!PROJECT_LANGUAGE!": sys.argv[2] if len(sys.argv) >= 3 else 'CXX',
    "!PROJECT_LVERSION!": sys.argv[3] if len(sys.argv) >= 4 else '20',
}

def replace_content_wildcard(path):
    if os.path.basename(path) == os.path.basename(__file__):
        return

    with open(path, 'r+') as file:
        data = file.read()
        file.seek(0)
        file.truncate(0)

        for wildcard in WILDCARDS:
            data = data.replace(wildcard, WILDCARDS[wildcard])
        
        file.write(data)

def replace_basename_wildcard(path):
    if os.path.basename(path) != list(WILDCARDS)[0]:
        return
   
    dirname  = os.path.dirname(path)
    filename = os.path.join(dirname, WILDCARDS[list(WILDCARDS)[0]])
    os.rename(path, filename)

def replace_wildcards(directory):
    for file in os.listdir(directory):
        if file.startswith("."):
            continue
           
        filepath = os.path.join(directory, file)
        
        if os.path.isfile(filepath):
            replace_content_wildcard(filepath)
        if os.path.isdir(filepath):
            replace_wildcards(filepath)
            replace_basename_wildcard(filepath)

replace_wildcards(os.getcwd())

os.remove(__file__)