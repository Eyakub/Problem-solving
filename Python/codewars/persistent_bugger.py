# https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/train/python

def persistence(n):
    if n < 10:
        return 0
    num_str = str(n)
    total = 1
    for i in num_str:
        total = total * int(i)
    return 1 + persistence(total)

print(persistence(999))