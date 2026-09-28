
def is_in_pattern(first :int, second:int) -> bool :
    return first + 1 == second


def pattern_tracker(text: str) -> int:
    count : int = 0
    for current, next_char in zip(text, text[1:]):
        if current.isdigit() and next_char.isdigit() :
            curr_dig : int = int(current)
            next_dig : int = int(next_char)
            if is_in_pattern(curr_dig,next_dig):
                count += 1
    return count

if __name__ == "__main__" :
    pattern_tracker("123")      
    pattern_tracker("12a34")    
    pattern_tracker("987654321")
    pattern_tracker("01234567") 
    pattern_tracker("abc")      
    pattern_tracker("1a2b3c4")  
    pattern_tracker("112233")   