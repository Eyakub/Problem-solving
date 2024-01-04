import numpy as np
import array


my_array = array.array('i', [1, 2, 3, 4])
print(my_array)

my_array.insert(0, 6)   # time complexity: O(N) at the beginning of array insert
                        # space complexity: O(1) as it takes one space at a time in memory
# my_array.insert()
print(my_array)