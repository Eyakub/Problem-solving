def print_items(a, b):
    """ Time complexity: O(a) + O(b) = O(a+b)"""
    for i in range(a):
        print(i)
    for j in range(b):
        print(j)


def print_items1(a, b):
    """ Time complecity: O(a * b)"""
    for i in range(a):
        for j in range(b):
            print(i, j)
