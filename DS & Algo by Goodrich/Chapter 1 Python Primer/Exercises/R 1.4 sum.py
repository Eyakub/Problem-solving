# Write a short Python function that takes a positive integer n and returns
# the sum of the squares of all the positive integers smaller than n.


def sumOfSeq(n):
    total = 0
    # totalsum = sum(j*j for j in range(1, n+1))    # built in sum function
    for v in range(1, n+1):
        total += v*v
        # print(total)
    return total


print(sumOfSeq(5))