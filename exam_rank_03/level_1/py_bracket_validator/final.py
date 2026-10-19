def nesting_boxes(tags :str) -> bool : 
	tags = tags.strip()
	tags = [c for c in tags if c in "()[]{}"]
	tags = "".join(tags)
	if not tags :
		return True
	while "()" in tags or "{}" in tags or "[]" in tags :
		tags = tags.replace("()", "")
		tags = tags.replace("{}", "")
		tags = tags.replace("[]", "")
	if not tags :
		return True
	return False

if __name__ == "__main__":
	for text in ("()", "()[]{}", "(]", "([)]", "{[]}", "hello(world)", "((())", ""):
		print(f"nesting_boxes({text!r}) -> {nesting_boxes(text)}")
