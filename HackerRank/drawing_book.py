import os
import sys


def pageCount(n, p):
    end_p = n // 2
    target_p = p // 2
    return min(target_p, end_p - target_p)


if __name__ == "__main__":
    n = int(input())
    p = int(input())
    result = pageCount(n, p)
    print(result)
