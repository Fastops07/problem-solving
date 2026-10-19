def mirror_matrix(matrix: list[list[int]]) -> list[list[int]]:
	res = []
	for row in matrix :
		res.append(row[::-1])
	return res

if __name__ == "__main__":
    mirror_matrix([[1, 2, 3], [4, 5, 6]])
    mirror_matrix([[1, 2], [3, 4], [5, 6]])
    mirror_matrix([[7]])
    mirror_matrix([[1, 2, 3, 4]])

