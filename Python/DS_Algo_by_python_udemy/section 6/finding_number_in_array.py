# How to check if an aarray contains a number in Python
import numpy as np


my_array = np.array([1, 2, 3, 4, 5, 6, 7, 8, 8, 10, 22, 33, 44, 66])


def find_number(array, number):
    for i, num in enumerate(array):
        print(i, num)
        if num == number:
            print("Index: ", i)
            break


find_number(my_array, 2)
