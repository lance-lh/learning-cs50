words = set()

def check(word):
    return word.lower() in words

def load(dictonary):
    file = open(dictonary, "r")
    for line in file:
        words.add(line.rstrip("\n"))
    file.close()
    return True

def size():
    return len(words)

def unload():
    return True

