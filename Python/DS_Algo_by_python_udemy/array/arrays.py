import array
import numpy as np

my_array = array.array('i')     # space & Time complexity: O(1)
my_array1 = array.array('i', [1, 2, 3])     # space & Time complexity: O(N)
# print(my_array1)

np_array = np.array([], dtype=int)      # O(1)  as it's an empty array
np_array = np.array([1, 2, 3, 4])       # O(N) as it increasing the memory space based on the inputs
print(np_array)
