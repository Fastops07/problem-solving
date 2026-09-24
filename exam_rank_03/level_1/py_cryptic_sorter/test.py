from enum import Enum


class DIFF(Enum):
    LOWER = 1
    EQUAL = 2
    GREATER = 3


def compare_len(value: str, lowest: str) -> DIFF:
    if len(value) < len(lowest):
        return DIFF.LOWER
    if len(value) == len(lowest):
        return DIFF.EQUAL
    return DIFF.GREATER


def compare_ascii(value: str, lowest: str) -> DIFF:
    for index, _ in enumerate(value):
        ascii_value = ord(value[index].casefold())
        ascii_lowest = ord(lowest[index].casefold())

        if ascii_value < ascii_lowest:
            return DIFF.LOWER
        if ascii_value > ascii_lowest:
            return DIFF.GREATER

    return DIFF.EQUAL

def compare_vowels(value:str, lowest:str) -> DIFF :
# TODO mais je penses que voyelle c est du troll, si deja meme longueur et meme ascii c est meme voyelle non ? 
    def count_vowels(word:str)-> int:
        count :int = 0
        for char in word :
            if char in "aeiouy":
                count += 1
        return count
    vowels_value = count_vowels(value)
    vowels_lowest = count_vowels(lowest)


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
            elif ascii_state == DIFF.EQUAL:
                print("hasard de dingue !!!")
    return lowest_index


def cryptic_sorter(strings: list[str]) -> list[str]:
    ordered_list: list[str] = []
    while strings:
        lowest: int = get_lowest_by_index(strings)
        ordered_list.append(strings.pop(lowest))

    print("order", ordered_list)
    print("old", strings)
    return []


if __name__ == "__main__":
    cryptic_sorter(["aa", "aa", "ac"])
