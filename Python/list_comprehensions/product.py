a = [1, 2, 3, 4, 5]
b = [6, 7, 8, 9, 10]

z = []

for i in range(len(a)):
    z.append(a[i]*b[i])

# using list comprehension
z = [a[i]*b[i] for i in range(len(a))]
print(z)