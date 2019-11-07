#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    list_res = [0, 0]
    for i in range(3):
        if a[i] > b[i]:
            list_res[0] = list_res[0] + 1
        elif a[i] < b[i]:
            list_res[1] = list_res[1] + 1
        # elif a[i] == b[i]:
    return " ".join([str(list) for list in list_res])


if __name__ == "__main__":

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)
    print(result)
