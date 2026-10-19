def cryptic_sorter(labels: list[str]) -> list[str] :
	res = []
	if not labels :
		return res
	while labels :
		li = 0
		lw = labels[0]
		for i, label in enumerate(labels[1:],start=1) :
			if len(lw) > len(label) :
				lw = label
				li = i
			elif len(lw) == len(label) :
				for l, c in zip(lw.lower(), label.lower()) :
					if ord(l) > ord(c):
						lw = label
						li = i
						break
					if ord(l) < ord(c) :
						break
		res.append(labels.pop(li))
	return res

if __name__ == "__main__":
    tests = [
        ["apple", "cat", "banana", "dog", "elephant"],
        ["aaa", "bbb", "AAA", "BBB"],
        ["hello", "world", "hi", "test"],
        [],
        [""],
        ["", "a", "", "B"],
        ["a", "A", "a", "A"],
        ["ABC", "abc", "AbC", "aBc"],
        ["dog", "cat", "ant", "bee"],
        ["a!", "!a", "A?", "?a", "12", "21"],
        ["ae", "bb", "EA", "Bb", "ea"],
        [" ", "", "  ", "a", "A"],
        ["same", "same", "SAME", "Same"],
        ["longest", "long", "lo", "l", ""],
    ]

    for strings in tests:
        print(f"Entrée : {strings!r}")
        print(f"Retour : {cryptic_sorter(strings)!r}")
        print()
