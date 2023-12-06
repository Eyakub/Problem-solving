import sys


def gen(n):
    for i in range(n):
        yield i**2


g = gen(10000)

# for i in g:
#     print(i)

x = [i ** 2 for i in range(10000)]

print(sys.getsizeof(x))
print(sys.getsizeof(g))
