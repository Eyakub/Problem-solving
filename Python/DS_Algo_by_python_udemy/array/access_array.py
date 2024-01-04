from array import *

arr1 = array('i', [1, 2, 3, 4, 5])


def accessElement(array, index):
    """
    Time complexity: O(1)
    Space complexity: O(1) as it doesn't require more space for this operation
    """
    if index >= len(array):              # TC: O(1)
        print("Index is out of range")  # TC: O(1)
    else:                               # TC: O(1)
        print(array[index])             # TC: O(1)


accessElement(arr1, 9)
