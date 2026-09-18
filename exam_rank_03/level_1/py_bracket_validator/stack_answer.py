OPEN_BRACKETS :set[str]= {"(", "[", "{"}
BRACKETS: set[str] = {"(", ")", "[", "]", "{", "}"}

MATCHING_BRACKETS :dict[str,str] = {
    ")": "(",
    "]": "[",
    "}": "{",
}

def create_bracket_list(s:str) -> list[str]:
    return [char for char in s if char in BRACKETS]

def bracket_validator_stack_approch(s: str) -> bool:
    bracket_lst : list[str] = create_bracket_list(s)
    stack: list[str] = []

    for bracket in bracket_lst :
        if bracket in OPEN_BRACKETS :
            stack.append(bracket)
        elif bracket in MATCHING_BRACKETS :
            if not stack :
                return False
            if stack.pop() != MATCHING_BRACKETS[bracket]:
                return False
    return not stack



if __name__ == "__main__":
    bracket_validator_stack_approch("([])")