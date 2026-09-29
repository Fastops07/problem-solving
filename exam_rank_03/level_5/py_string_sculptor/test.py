
def string_sculptor(text: str) -> str:
    should_upper : bool = False
    res : list[str] = []
    for char in text :
        if char == " " : 
            should_upper = False
            res.append(" ")
            continue
        if not char.isalpha() :
            res.append(char)
            continue
        if should_upper :
            res.append(char.upper())
            should_upper = False
        else :
            res.append(char.lower())
            should_upper = True
            
    return "".join(res)

if __name__ == "__main__" :

    print(string_sculptor("hello"))
    print(string_sculptor("Hello World"))
    print(string_sculptor("abc123df"))
    print(string_sculptor("Python39!"))
    print(string_sculptor("")     )