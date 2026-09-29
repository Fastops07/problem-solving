BASE_STRING = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

def find_highest_exponent (number :int, base:int) -> int :
    exponent = 0
    while base ** exponent <= number :
        exponent += 1
    return exponent - 1

def number_base_converter(number: str, from_base: int, to_base: int) -> str:
    if not 2 <= to_base <= 36 or not 2 <= from_base <= 36 :
        return "ERROR"
    try :
        decimal_value = int(number, from_base)
    except ValueError:
        return "ERROR"

    res : list[str] = []
    if decimal_value == 0 :
        return "0"
    start_exponent : int = find_highest_exponent(decimal_value, to_base)
    while start_exponent >= 0 :
        index = decimal_value // to_base ** start_exponent
        res.append(BASE_STRING[index])
        decimal_value = decimal_value % to_base ** start_exponent
        start_exponent -= 1

    return "".join(res)

if __name__ == "__main__" :
    print(number_base_converter("1010", 2, 10))
    print(number_base_converter("FF", 16, 10) )  
    print(number_base_converter("255", 10, 16))  
    print(number_base_converter("123", 10, 2) )  
    print(number_base_converter("Z", 36, 10)  )  
    print(number_base_converter("35", 10, 36) )  
    print(number_base_converter("123", 1, 10) )  