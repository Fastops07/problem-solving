BRACKETS: list[str] = ["(", ")", "[", "]", "{", "}"]

OPEN_BRACKETS: list[str] = ["(", "[", "{"]

CLOSE_BRACKETS: list[str] = [")", "]", "}"]


def create_bracket_list(s: str) -> list[str]:
    return [char for char in s if char in BRACKETS]


def opposite(open_backet: str) -> str:
    if open_backet == "(":
        return ")"
    if open_backet == "[":
        return "]"
    if open_backet == "{":
        return "}"
    return "ERROR"


def look_for_pairs(bracket_list: list[str]) -> None:
    target: str = bracket_list[0]
    print(f"list: {bracket_list}, target:{target}")
    if target == opposite(target):
        bracket_list.remove(target)
        bracket_list.remove(target)
    for bracket in bracket_list:
        if bracket in OPEN_BRACKETS:
            start = bracket_list.index(bracket)
            look_for_pairs(bracket_list[start + 1 :])


def bracket_validator(s: str) -> bool:
    bracket_list: list[str] = create_bracket_list(s)
    look_for_pairs(bracket_list)
    print("apresss", bracket_list)
    return True


if __name__ == "__main__":
    print(bracket_validator("([aeaoi])"))

# L idee c est peut etre pas une boucle, quand on entre dans la fonction,
# si c est une open on rappelle la fn et si c est une close, si c est pas l opposite de target y a un pb donc peut etre pas obligé de bouclé
