def letter_offset(letter: str, offset: int) -> str:
    start: int
    end: int

    if letter.islower():
        start = 97
        end = 122
    else:
        start = 65
        end = 90

    ascii_value: int = ord(letter)
    while offset > 0:
        if ascii_value == end:
            ascii_value = start
        else:
            ascii_value += 1
        offset -= 1

    return chr(ascii_value)


def whisper_cipher(text: str, shift: int) -> str:
    shift %= 26
    print(shift)
    res : list[str] = []
    for char in text:
        if char.isalpha() :
            res.append(letter_offset(char, shift))
        else :
            res.append(char)
    return "".join(res)


if __name__ == "__main__":
    print(whisper_cipher("hello", 3))  # "khoor"
    print(whisper_cipher("Hello World!", 1))  # "Ifmmp Xpsme!"
    print(whisper_cipher("xyz", 3))  # "abc"
    print(whisper_cipher("ABC123def", 5))  # "FGH123ijk"
    print(whisper_cipher("", 10))  # ""
    print(whisper_cipher("abc", -3))  # "xyz"
