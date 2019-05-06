# Give a single command that computes the sum from Exercise R-1.6, relying
# on Python’s comprehension syntax and the built-in sum function.


def sumOfOddBuilt(n):
    total = sum(i*i for i in range(1, n+1, 2))
    return total


print(sumOfOddBuilt(5))