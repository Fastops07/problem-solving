def shadow_merge(list1: list[int], list2: list[int]) -> list[int]:
    unsorted_merged_list: list[int] = list1 + list2
    sorted_merged_list: list[int] = []
    while unsorted_merged_list:
        mini: int = min(unsorted_merged_list)
        sorted_merged_list.append(mini)
        unsorted_merged_list.remove(mini)
    return sorted_merged_list


if __name__ == "__main__":
    shadow_merge([1, 3, 5], [2, 4, 6])
    shadow_merge([1, 2, 3], [4, 5, 6])
    shadow_merge([1], [2, 3, 4])
    shadow_merge([], [1, 2, 3])
    shadow_merge([1, 1, 2], [1, 3, 3])
