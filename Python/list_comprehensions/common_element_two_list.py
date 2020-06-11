a = [1, 2, 3, 4, 3, 4]
b = [2, 3, 4, 5, 10]

result = []

for i in a:
    if i in b:
        result.append(i)

# list comprehension
result = [i for i in a if i in b]
print(result)