def clean_str(text: str) -> str:
    return "".join(char for char in text.lower() if char.isalpha())


def echo_validator(text: str) -> bool:

    alpha_text = clean_str(text)
    if not alpha_text:
        return False
    word_len = len(alpha_text)

    for i in range(word_len // 2):
        if alpha_text[i] != alpha_text[word_len - 1 - i]:
            return False
    return True


if __name__ == "__main__":
    print(echo_validator("racecar"))
    print(echo_validator("A man a plan a canal Panama"))
    print(echo_validator("race a car"))
    print(echo_validator("Was it a car or a cat I saw"))
    print(echo_validator("hello"))
    print(echo_validator("Madam Im Adam"))
    print(echo_validator(""))
