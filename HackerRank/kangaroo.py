import math
import os
import sys
import re


def kangaroo(x1, v1, x2, v2):
    # forward jump limit
    for i in range(10000):
        # if not equal
        if (x1 + v1) == (x2 + v2):
            return "YES"
        # continue jumping below
        x1 += v1
        x2 += v2
    return "NO"


if __name__ == "__main__":
    arr = input().split()
    print(kangaroo(x1=int(arr[0]), v1=int(arr[1]), x2=int(arr[2]), v2=int(arr[3])))

