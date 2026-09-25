def inter(s1: str, s2: str) -> str:
    commun_letter : list[str] = []

    for char in s1 :
        if char in s2 and char not in commun_letter :
            commun_letter.append(char)
    return "".join(commun_letter)


if __name__ == "__main__":
    print(inter("hello", "world"))   # lo
    print(inter("Nbanana", "bannnnNnd"))   # ban
    print(inter("abcabc", "bc"))     # bc
    print(inter("abc", "xyz"))       # ""
    print(inter("", "abc"))          # ""