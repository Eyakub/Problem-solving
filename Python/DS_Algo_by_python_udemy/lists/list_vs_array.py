import numpy as np

"""
array should be same data type else it will convert them into string element
for Data structure operations, Array is better

List can contains any type, but it can't do arithmatic operation directly
"""
myArray = np.array([1, 2, 3, 4, 5, 6])
myList = [1, 2, 3, 4, 5, 'a']

print(myArray/2)
print(myList/2)
