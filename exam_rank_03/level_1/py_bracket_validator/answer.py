BRACKETS: set[str] = {"(", ")", "[", "]", "{", "}"}

OPEN_BRACKETS: set[str] = {"(", "[", "{"}


def create_bracket_list(s: str) -> list[str]:
    return [char for char in s if char in BRACKETS]


def get_closing_bracket(opening_bracket: str) -> str:
    if opening_bracket == "(":
        return ")"
    if opening_bracket == "[":
        return "]"
    if opening_bracket == "{":
        return "}"
    return "ERROR"


def remove_matching_pair(
    bracket_list: list[str], curr_idx: int, next_idx: int
) -> bool:
    if not bracket_list:
        return True
    if next_idx >= len(bracket_list):
        return False
    curr_bracket: str = bracket_list[curr_idx]
    next_bracket: str = bracket_list[next_idx]

    if next_bracket == get_closing_bracket(curr_bracket):
        bracket_list.pop(next_idx)
        bracket_list.pop(curr_idx)
        return True

    if next_bracket in OPEN_BRACKETS:
        return remove_matching_pair(bracket_list, next_idx, next_idx + 1)
    return False


def bracket_validator(s: str) -> bool:
    bracket_list: list[str] = create_bracket_list(s)
    pair_found = True

    if len(bracket_list) % 2 == 1:
        return False

    while bracket_list and pair_found:
        pair_found = remove_matching_pair(bracket_list, 0, 1)
    return pair_found


if __name__ == "__main__":
    print(bracket_validator("()"))
    print(bracket_validator("()[]{}"))
    print(bracket_validator("(]"))
    print(bracket_validator("([)]"))
    print(bracket_validator("{[]}"))
    print(bracket_validator("hello(world)"))
    print(bracket_validator("((())"))
    print(bracket_validator(""))
