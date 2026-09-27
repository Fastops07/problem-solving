



def is_in_pattern(first :int, second:int) -> bool
    return first + 1 == second


def pattern_tracker(text: str) -> int:
    count : int = 0
    for current, next_char in zip(text, text[1:]):
        print(current, next_char)

    return count

if __name__ == "__main__" :
    pattern_tracker("01234")