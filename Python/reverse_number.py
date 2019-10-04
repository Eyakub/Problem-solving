# 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1
def serialReverse():
    lst = []
    rev = []
    for i in range(1, 11):
        lst.append(i)
    rev = lst[::-1]
    lst = lst + rev[1:]


serialReverse()