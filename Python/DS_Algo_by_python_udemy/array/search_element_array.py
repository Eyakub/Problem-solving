from array import *


arr1 = array('i', [1, 2, 3, 4, 5])


def linear_search(arr, target):
    """
    time complexity: O(N) as combination of -> O(N) + O(1) + O(1) + O(1) = O(N)
    space complexity: O(1) as no new memory is required
    """
    for i, value in enumerate(arr):     # TC: O(N)
        if value == target:             # TC: O(1)
            return i                    # TC: O(1)
        return -1                       # TC: O(1)


linear_search(arr1, 3)
