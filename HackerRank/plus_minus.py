import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    pos = neg = zero = 0
    for i in range(len(arr)):
        if arr[i] > 0:
            pos = pos + 1
        if arr[i] < 0:
            neg = neg + 1
        if arr[i] == 0:
            zero = zero + 1
    pos = pos / len(arr)
    neg = neg / len(arr)
    zero = zero / len(arr)
    print("{0:.6f}".format(pos))
    print("{0:.6f}".format(neg))
    print("{0:.6f}".format(zero))

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
