# Write a short Python function that takes a positive integer n and returns
# the sum of the squares of all the odd positive integers smaller than n.


def sumOfOddSeq(n):
    total = 0
    for i in range(1, n+1, 2):      # as it requires odd positive, so 1+2 = 3 odd seq
        # print(total, i)
        total += i*i
    return total


print(sumOfOddSeq(5))