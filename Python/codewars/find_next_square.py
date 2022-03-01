# https://www.codewars.com/kata/56269eb78ad2e4ced1000013/train/python
import math


def find_next_square(sq):
    # nextN = math.floor(math.sqrt(sq)) + 1
    # print(nextN * nextN)
    if (math.sqrt(sq)).is_integer():
         return int(math.sqrt(sq) + 1) **  2
    else:
        return -1


if __name__ == '__main__':
    # n = input()
    find_next_square(625)