# Reduce
# we need: a function that takes 2 params, A sequence

from functools import reduce


nums = [10, 3, 1, 0, 2]


def add(a: int, b: int):
    return a + b


result = reduce(add, nums)
print(result)


letters = list('abcde')
print(letters)

def rev(a: str, b: str) -> str:
    return b + a

result1 = reduce(rev, letters)


# try using lambda
result2 = reduce(lambda a, b: b+a, letters)
print("Reverse using lambda: ", result2)

