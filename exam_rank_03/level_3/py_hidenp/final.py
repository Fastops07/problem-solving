def hidenp(small: str, big: str) -> bool:
	big = [c for c in big if c in small]
	big = "".join(big)
	
	return small in big

if __name__ == "__main__" :
    print(hidenp("abc", "a1b2c3")      )
    print(hidenp("ace", "abcde")     )
    print(hidenp("aec", "abcde")     )
    print(hidenp("", "abc")          )
    print(hidenp("abc", "ab")        )
    print(hidenp("aaaa", "aaa")      )
    print(hidenp("sing", "subsequence testing"))

