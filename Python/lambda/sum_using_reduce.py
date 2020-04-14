from functools import reduce

lst = [10, 4, 5, 6, 3]

result = reduce(lambda x, y: x+y, lst)
print(result)