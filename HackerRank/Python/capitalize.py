def solve(s):
    str_list = s.split()
    for i in range(len(str_list)):
        if str_list[i][0].islower():
            str_list[i] = str_list[i][0].upper() + str_list[i][1:]

    print(' '.join(str_list))

    for x in s[:].split():
        s = s.replace(x, x.capitalize())
    print(s)

if __name__ == "__main__":
    # s = input()
    s = 'eyakub sorkar'
    solve(s)