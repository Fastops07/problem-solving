def inter(s1: str, s2: str) -> str:
# PAS BON UN SET C EST PAS ORDONNE
    commun_letter : set[str] = set()


    for char in s1 :
        if char in s2 :
            commun_letter.add(char) 

    return ""


if __name__ == "__main__":
    inter("SS1", "SB2")
    # print(inter("hello", "world"))   # lo
    # print(inter("banana", "band"))   # ban
    # print(inter("abcabc", "bc"))     # bc
    # print(inter("abc", "xyz"))       # ""
    # print(inter("", "abc"))          # ""