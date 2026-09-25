BRACKETS : set[str] = {"(", ")", "[", "]", "{", "}"}


def bracket_validator(s: str) -> bool:
    brackets = "".join(
        [char for char in s if char in BRACKETS]
    )
    while "()" in brackets or "[]" in brackets or "{}" in brackets :
        brackets = brackets.replace("()","")
        brackets = brackets.replace("[]","")
        brackets = brackets.replace("{}","")
        
    return not brackets

    

if __name__ == "__main__" :
    bracket_validator("({[]c}oucou)")