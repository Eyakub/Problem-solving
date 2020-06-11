def add_five(x):
    return x + 5


nums = [11, 22, 33, 44, 55]
result1 = list(map(add_five, nums))
result2 = list(map(lambda x: x + 5, nums))
print("Using list map on a pure function: ", result1)
print("Using list map on a anonymous function: ", result2)

# the function filter filters an iterable by removing items  that
# don't match a predicate (a function that returns a Boolean)
res = list(filter(lambda x: x % 2 == 0, nums))
print("Using Filter function: ", res)
