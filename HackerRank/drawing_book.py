import os
import sys

"""
n = 11, p = 4
every slide has 2 side to divide with 2
[ ,1][2,3][4,5][6,7][8,9][10,11]
Total = 11 / 2 = 5
goal page(from left - right) = 4 / 2
goal page(right - left0 = total - (left-right)) = 5-2=3
min(2, 3) = 2

"""


def pageCount(n, p):
    end_p = n // 2
    target_p = p // 2
    return min(target_p, end_p - target_p)


if __name__ == "__main__":
    n = int(input())
    p = int(input())
    result = pageCount(n, p)
    print(result)
