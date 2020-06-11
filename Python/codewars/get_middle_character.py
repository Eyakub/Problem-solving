def get_middle(s):
    return s[(len(s)-1)//2:(len(s)+2)//2]


def get_middle_1(s):
    x = len(s)
    y = int(x/2)
    if x%2==0:
        return s[y-1:y+1]
    else:
        return s[y:y+1]
print(get_middle('test'))