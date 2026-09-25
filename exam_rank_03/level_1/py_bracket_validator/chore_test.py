
# BRACKETS: list[str] = ["(", ")", "[", "]", "{", "}"]

# OPEN_BRACKETS: list[str] = ["(", "[", "{"]

# CLOSE_BRACKETS: list[str] = [")", "]", "}"]


# def create_bracket_list(s: str) -> list[str]:
#     return [char for char in s if char in BRACKETS]


# def opposite(open_backet: str) -> str:
#     if open_backet == "(":
#         return ")"
#     if open_backet == "[":
#         return "]"
#     if open_backet == "{":
#         return "}"
#     return "ERROR"


# # def look_for_pairs(bracket_list: list[str]) -> None:
# #     target: str = bracket_list[0]
# #     print(f"list: {bracket_list}, target:{target}")
# #     if target == opposite(target):
# #         bracket_list.remove(target)
# #         bracket_list.remove(target)
# #     for bracket in bracket_list:
# #         if bracket in OPEN_BRACKETS:
# #             start = bracket_list.index(bracket)
# #             look_for_pairs(bracket_list[start + 1 :])

# # def look_for_pairs(bracket_list: list[str]) -> list[str]:
# #     curr: str = bracket_list[0]
# #     print("Entry :", curr, next)

# #     if next == opposite(curr):
# #         bracket_list.remove(curr)
# #         bracket_list.remove(next)
# #         print("J ai rem", curr, next)
# #         return bracket_list

# #     if next in OPEN_BRACKETS:
# #         bracket_list = look_for_pairs(bracket_list[1:])
# #         bracket_list.insert(0, curr)
# #         look_for_pairs(bracket_list[:])

# #     print("OVER", bracket_list)


# def look_for_pairs(bracket_list: list[str], start: int, end: int) -> bool:
#     if len(bracket_list) % 2 == 1:
#         return False
#     if len(bracket_list) == 0:
#         return True

#     curr: str = bracket_list[start]
#     next: str = bracket_list[end]
#     print("Entry :", curr, next)

#     if next == opposite(curr):
#         print("Je rm", bracket_list[start], bracket_list[end])
#         bracket_list.pop(end)
#         bracket_list.pop(start)
#         return True

#     if next in OPEN_BRACKETS:
#         return look_for_pairs(bracket_list, end, end + 1)
#     return False


# def bracket_validator(s: str) -> bool:
#     bracket_list: list[str] = create_bracket_list(s)
#     res = True
#     while len(bracket_list) != 0 and res:
#         res = look_for_pairs(bracket_list, 0, 1)
#     return res
#     # res = look_for_pairs(bracket_list,0,1)
#     # print(res,bracket_list)
#     # res1 = look_for_pairs(bracket_list,0,1)
#     # print(res1, bracket_list)


# if __name__ == "__main__":
#     print(bracket_validator("(()([][]){)}"))

# # L idee c est peut etre pas une boucle, quand on entre dans la fonction,
# # si c est une open on rappelle la fn et si c est une close, si c est pas l opposite de target y a un pb donc peut etre pas obligé de bouclé
# # Non il manque un truc faut boucle quelques part quand meme


# OPEN_BRACKETS: list[str] = ["(", "[", "{"]


# def get_closing_bracket(open_backet: str) -> str:
#     if open_backet == "(":
#         return ")"
#     if open_backet == "[":
#         return "]"
#     if open_backet == "{":
#         return "}"
#     return "ERROR"


# def find_closing_bracket_in_substring(sub: str) -> int:
#     closing_bracket = get_closing_bracket(sub[0])
#     for index, char in enumerate(sub):
#         if char == closing_bracket:
#             return index
#     return -1


# def validate_pairs(s: str) -> int:
#     for index, char in enumerate(s):
#         if char in OPEN_BRACKETS:
#             closing_idx = find_closing_bracket_in_substring(s[index:])
#             print(closing_idx)
#             if closing_idx == -1:
#                 return -1
#             if closing_idx == 1:
#                 return closing_idx

#             print(
#                 f"Closing:{closing_idx} - start:{index} = {closing_idx - index}"
#             )
#             res = validate_pairs(s, index, closing_idx)
#             print(res)
#             return res
#     return True


# def bracket_validator(s: str) -> bool:
#     start: int = 0
#     while start != len(s):
#         res = validate_pairs(s[start:])
#         if res == -1:
#             return False
#         start += res
#     return True


# if __name__ == "__main__":
#     print(bracket_validator("()"))


# # **************************************************************************** #
# #                                                                              #
# #                                                         :::      ::::::::    #
# #    testv2.py                                          :+:      :+:    :+:    #
# #                                                     +:+ +:+         +:+      #
# #    By: fastops07 <fastops07@student.42belgium.be> +#+  +:+       +#+         #
# #                                                 +#+#+#+#+#+   +#+            #
# #    Created: 2026/09/15 16:39:54 by fastops07         #+#    #+#              #
# #    Updated: 2026/09/15 16:39:55 by fastops07        ###   #######belgium.be  #
# #                                                                              #
# # **************************************************************************** #



# OPEN_BRACKETS: list[str] = ["(", "[", "{"]

# def get_closing_bracket(open_backet: str) -> str:
#     if open_backet == "(":
#         return ")"
#     if open_backet == "[":
#         return "]"
#     if open_backet == "{":
#         return "}"
#     return "ERROR"

# def bracket_validator(s:str) -> None | bool :
#     if not s :
#         return True
#     if not any(char in OPEN_BRACKETS for char in s) :
#         return True

#     for index,char in enumerate(s) :
#         if char in OPEN_BRACKETS :
#             res = s.find(get_closing_bracket(char))
#             if res == -1:
#                 return
#             print(index)
#             print(res)
#             bracket_validator(s[index:res + 1])

# if __name__ == "__main__":
#     print(bracket_validator("([])"))