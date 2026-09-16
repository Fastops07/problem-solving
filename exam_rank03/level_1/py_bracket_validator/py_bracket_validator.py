OPEN_BRACKETS: list[str] = ["(", "[", "{"]


def get_closing_bracket(open_backet: str) -> str:
    if open_backet == "(":
        return ")"
    if open_backet == "[":
        return "]"
    if open_backet == "{":
        return "}"
    return "ERROR"


def find_closing_bracket_in_substring(sub: str) -> int:
    closing_bracket = get_closing_bracket(sub[0])
    for index, char in enumerate(sub):
        if char == closing_bracket:
            return index
    return -1


def validate_pairs(s: str) -> int:
    for index, char in enumerate(s):
        if char in OPEN_BRACKETS:
            closing_idx = find_closing_bracket_in_substring(s[index:])
            print(closing_idx)
            if closing_idx == -1:
                return -1
            if closing_idx == 1:
                return closing_idx

            print(
                f"Closing:{closing_idx} - start:{index} = {closing_idx - index}"
            )
            res = validate_pairs(s, index, closing_idx)
            print(res)
            return res
    return True


def bracket_validator(s: str) -> bool:
    start: int = 0
    while start != len(s):
        res = validate_pairs(s[start:])
        if res == -1:
            return False
        start += res
    return True


if __name__ == "__main__":
    print(bracket_validator("()"))
