def reverse_list(lst: list[int]) -> list[int]:
    return lst[::-1]


def mirror_matrix(matrix: list[list[int]]) -> list[list[int]]:
    double_tab: list[list[int]] = []
    for lst in matrix:
        double_tab.append(reverse_list(lst))
    return double_tab


if __name__ == "__main__":
    mirror_matrix([[1, 2, 3], [4, 5, 6]])
    mirror_matrix([[1, 2], [3, 4], [5, 6]])
    mirror_matrix([[7]])
    mirror_matrix([[1, 2, 3, 4]])
    mirror_matrix([[-1, -2], [-3, -4]])
