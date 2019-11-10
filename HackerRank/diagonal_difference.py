import math
import os
import random
import re
import sys


def diagonalDifference(arr):
    sum1 = sum2 = 0
    for i in range(len(arr)):
        sum1 = sum1 + arr[i][i]
        sum2 = sum2 + arr[i][len(arr) - i - 1]
        
    print(abs(sum1 - sum2))


if __name__ == "__main__":
    n = int(input().strip())

    arr = []

    # The python interpreter stores the last expression value 
    # to the special variable called _
    # >>> 10
    # 10
    # >>> _
    # 10
    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    diagonalDifference(arr)
    
