#!/bin/python3

import math
import os
import random
import re
import sys


def minMaxSum(arr):
    sum_list = []
    for i in range(len(arr)):
        sum_list.append(sum(arr) - arr[i])
    sum_list.sort(reverse=True)
    
    print(str(sum_list[len(sum_list) - 1]) + " " + str(sum_list[0]))


if __name__ == "__main__":
    a = list(map(int, input().rstrip().split()))
    minMaxSum(a)
