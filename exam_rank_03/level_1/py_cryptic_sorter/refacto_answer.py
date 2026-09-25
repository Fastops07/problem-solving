from enum import Enum


class DIFF(Enum):
    LOWER = -1
    EQUAL = 0
    GREATER = 1


def compare_len(value: str, lowest: str) -> DIFF:
    if len(value) < len(lowest):
        return DIFF.LOWER
    if len(value) == len(lowest):
        return DIFF.EQUAL
    return DIFF.GREATER


def compare_ascii(value: str, lowest: str) -> DIFF:
    for char_value, char_lowest in zip(value.lower(), lowest.lower()):

        if ord(char_value) < ord(char_lowest):
            return DIFF.LOWER
        if ord(char_value) > ord(char_lowest):
            return DIFF.GREATER

    return DIFF.EQUAL


def get_lowest_by_index(strings: list[str]) -> int:
    if len(strings) < 2:
        return 0
    lowest_index = 0
    lowest_value = strings[0]

    for index, value in enumerate(strings[1:], 1):
        len_state: DIFF = compare_len(value, lowest_value)
        if len_state == DIFF.LOWER:
            lowest_index = index
            lowest_value = value

        elif len_state == DIFF.EQUAL:
            ascii_state: DIFF = compare_ascii(value, lowest_value)
            if ascii_state == DIFF.LOWER:
                lowest_index = index
                lowest_value = value
    return lowest_index


def cryptic_sorter(strings: list[str]) -> list[str]:
    ordered_list: list[str] = []
    while strings:
        lowest: int = get_lowest_by_index(strings)
        ordered_list.append(strings.pop(lowest))

    return ordered_list


if __name__ == "__main__":
    print(cryptic_sorter(["    "]))
