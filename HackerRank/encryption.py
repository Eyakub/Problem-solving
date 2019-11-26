import math


def encryption(s):
    str_len = math.sqrt(len(s))
    len_col = math.ceil(str_len)
    len_row = int(len_col) - 1
    left_word = s[:]

    if len_row * len_col < len(s):
        len_row = len_col

    store_str = []
    for i in range(len_row):
        store_str.append(left_word[:len_col])
        left_word = left_word[len_col:]

    output_text = ""
    for i in range(len_col):
        for j in range(len_row):
            if i < len(store_str[j]):
                output_text += store_str[j][i]
        output_text += " "

    print(output_text)


if __name__ == "__main__":
    s = input()
    encryption(s)
