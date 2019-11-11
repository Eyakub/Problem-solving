import math
import os
import random
import re
import sys


def birthdayCakeCandles(arr):
    arr.sort(reverse=True)
    max = arr[0]
    print(arr.count(max))


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    birthdayCakeCandles(arr)
