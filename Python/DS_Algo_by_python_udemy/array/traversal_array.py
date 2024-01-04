from array import *

arr1 = array('i', [1, 2, 3, 4, 5, 6])
arr2 = array('d', [1.3, 1.4, 1.5])


def traverseArray(array):
    """
    combine of both complexity: O(N)
    Space complexity: O(1) as we don't need extra space
    for this operation in this function
    """
    for i in array:     # O(N)
        print(i)        # O(1)


traverseArray(arr1)
