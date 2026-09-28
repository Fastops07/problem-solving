def anagram(s1: str, s2: str) -> bool:
    clean_s1 = s1.lower().replace(" ", "")
    clean_s2 = s2.lower().replace(" ", "")

    for char in clean_s1:
        if char not in clean_s2:
            return False
        clean_s2 = clean_s2.replace(char, "", 1)

    return not clean_s2


if __name__ == "__main__":
    anagram("listen", "silent")
    anagram("Triangle", "Integral")
    anagram("Dormitory", "Dirty Room")
    anagram("hello", "world")
    anagram("", "")
    anagram("abc", "abcc")
