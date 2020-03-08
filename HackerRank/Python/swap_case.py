def swapCase(str):
    swap_str = ''
    for i in range(len(str)):
        if str[i].islower():
            swap_str += str[i].upper()
        elif str[i].isupper():
            swap_str += str[i].lower()
        else:
            swap_str += str[i]
    return swap_str

if __name__ == "__main__":
    # str = input()
    str = 'Www.HackerRank.com'
    print(swapCase(str))