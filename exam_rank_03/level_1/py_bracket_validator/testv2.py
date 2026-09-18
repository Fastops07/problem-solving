# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    testv2.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fastops07 <fastops07@student.42belgium.be> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/15 16:39:54 by fastops07         #+#    #+#              #
#    Updated: 2026/09/15 16:39:55 by fastops07        ###   #######belgium.be  #
#                                                                              #
# **************************************************************************** #



OPEN_BRACKETS: list[str] = ["(", "[", "{"]

def get_closing_bracket(open_backet: str) -> str:
    if open_backet == "(":
        return ")"
    if open_backet == "[":
        return "]"
    if open_backet == "{":
        return "}"
    return "ERROR"

def bracket_validator(s:str) -> None | bool :
    if not s :
        return True
    if not any(char in OPEN_BRACKETS for char in s) :
        return True

    for index,char in enumerate(s) :
        if char in OPEN_BRACKETS :
            res = s.find(get_closing_bracket(char))
            if res == -1:
                return
            print(index)
            print(res)
            bracket_validator(s[index:res + 1])

if __name__ == "__main__":
    print(bracket_validator("([])"))