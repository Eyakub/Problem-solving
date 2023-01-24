def reverseString(string):
    return string[::-1]


def reverseString1(string):
    str = ''
    for i in string:
        str = i + str
    return str


print(reverseString('hithere im no one'))
print(reverseString1('hithere im no one'))
print("Reversed String: ", "".join(reversed("eyakub")))
