
from tokenize import Exponent


def find_highest_exponent (number :int, base:int) -> int :
    exponent = 0
    while base ** exponent <= number :
        exponent += 1
    return exponent - 1

def number_base_converter(number: str, from_base: int, to_base: int) -> str:
    decimal_value = int(number, from_base)
    if decimal_value == 0 :
        return "0"
    start_exponent : int = find_highest_exponent(decimal_value, to_base)
    while start_exponent >= 0 :
        res = decimal_value // to_base ** start_exponent
        decimal_value = decimal_value % to_base ** start_exponent
        print(start_exponent, res, decimal_value)
        start_exponent -= 1
    
    return ""
if __name__ == "__main__" :
   print(number_base_converter("123", 10, 2))