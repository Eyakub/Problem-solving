# Give a single command that computes the sum from Exercise R-1.4, relying
# on Python’s comprehension syntax and the built-in sum function.


def sumOfSeq(n):
    totalsum = sum(j*j for j in range(1, n+1))    # built in sum function
    return totalsum


print(sumOfSeq(5))