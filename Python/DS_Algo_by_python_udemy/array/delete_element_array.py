from array import *


arr1 = array('i', [1, 2, 3, 4, 5])


def delete_element(arr, target):
    """
    Remove looks for element and remove
    -> Remove from last TC: O(1)
    -> Others TC: O(N)
    -> Space complexity: O(1)
    """
    arr.remove(target)
    return arr          # TC: O(1)


print(delete_element(arr1, 2))
