def clean_big(small:str, big:str) -> str :
    return "".join([char for char in big if char in small])

def hidenp(small: str, big: str) -> bool:
    big_clean = clean_big(small,big)
    return small in big_clean

if __name__ == "__main__" :
    print(hidenp("abc", "a1b2c3")      )
    print(hidenp("ace", "abcde")     )
    print(hidenp("aec", "abcde")     )
    print(hidenp("", "abc")          )
    print(hidenp("abc", "ab")        )
    print(hidenp("aaaa", "aaa")      )
    print(hidenp("sing", "subsequence testing"))