# https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/train/python

from functools import reduce
from operator import mul

def persistence(n):
    return 0 if n<10 else persistence(reduce(mul,[int(i) for i in str(n)],1))+1


def persistence2(n):
    if n < 10:
        return 0
    mul = 1
    while(n > 0):
        mul = n % 10 * mul
        n = n // 10
    return 1 + persistence(mul)

def persistence1(n):
    if n < 10:
        return 0
    num_str = str(n)
    total = 1
    for i in num_str:
        total = total * int(i)
    return 1 + persistence(total)

print(persistence(999))