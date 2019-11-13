import math
import os
import random
import re
import sys

# Complete the countApplesAndOranges function below.
def countApplesAndOranges(s=7, t=11, a=5, b=15, apples=[-2, 2, 1], oranges=[5, -6]):
    apple_count = orange_count = 0
    for i in range(len(apples)):
        # check fallen apples range is between the house range
        if (a + apples[i]) in range(s, t + 1):
            apple_count = apple_count + 1
    for j in range(len(oranges)):
        if (b + oranges[j]) in range(s, t + 1):
            orange_count = orange_count + 1
    print(apple_count, orange_count, sep="\n")


if __name__ == "__main__":
    st = input().split()

    s = int(st[0])

    t = int(st[1])

    ab = input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
    # countApplesAndOranges()
