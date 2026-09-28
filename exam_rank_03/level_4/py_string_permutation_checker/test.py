def string_permutation_checker(s1: str, s2: str) -> bool:
    for char in s1 :
        if char not in s2 :
            return False
        s2 = s2.replace(char, "", 1)
    return not s2

if __name__ == "__main__":
    print(string_permutation_checker("abc", "bca"))          # True
    print(string_permutation_checker("abc", "def"))          # False
    print(string_permutation_checker("listen", "silent"))    # True
    print(string_permutation_checker("hello", "bello"))      # False
    print(string_permutation_checker("", ""))                # True
    print(string_permutation_checker("a", ""))               # False
    print(string_permutation_checker("Abc", "abc"))          # False
    print(string_permutation_checker("a gentleman", "elegant man"))  # True