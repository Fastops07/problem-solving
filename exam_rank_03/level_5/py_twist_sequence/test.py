# Je dirais split avec slice et puis faire un plus


def twist_sequence(arr: list[int], k: int) -> list[int]:
    arr_len = len(arr)
    if arr_len < 2:
        return arr

    if k > arr_len:
        k %= arr_len
    new_end_part: list[int] = arr[:-k]
    new_start_part = arr[-k:]
    new_arr = new_start_part + new_end_part
    return new_arr


if __name__ == "__main__":
    print(twist_sequence([1, 2, 3, 4, 5], 2))  # [4, 5, 1, 2, 3]
    print(twist_sequence([1, 2, 3], 1))  # [3, 1, 2]
    print(twist_sequence([1, 2, 3, 4], 0))  # [1, 2, 3, 4]
    print(twist_sequence([1, 2, 3], 5))  # [2, 3, 1]
    print(twist_sequence([], 3))  # []
