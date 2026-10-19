def echo_validator(text: str) -> bool:
	text = [c.lower() for c in text if c.isalpha()]
	if not text :
		return False
	rtxt = text[::-1]
    
	return text == rtxt	

if __name__ == "__main__":
    tests = [
        'racecar',
        'A man a plan a canal Panama',
        'race a car',
        'Was it a car or a cat I saw',
        'hello',
        'Madam Im Adam',
        '',
        'a',
        'Aa',
        'ab',
        '   ',
        '12345',
        '!?.,',
        'A man, a plan, a canal: Panama!',
        "No 'x' in Nixon",
        'a1b2a',
        'a1b2c',
        'a\tb\na',
        'été',
    ]

    for text in tests:
        print(f"echo_validator({text!r}) -> {echo_validator(text)!r}")
