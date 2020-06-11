# generators are a type of iterable, like lists or tuples
# unlike lists, they don't allow indexing with arbitrary indices,
# but they can still be iterable through with FOR loops
# they can be created using functions and the YIELD statement
"""
In short, generators allow you to declare a function 
that behaves like an iterator, i.e. 
it can be used in a for loop.
"""


def countdown():
    i = 5
    while i > 0:
        yield i
        i -= 1


def infinite_sevens():
    while True:
        yield 7


def numbers(x):
    for i in range(x):
        if i % 2 == 0:
            yield i


for i in countdown():
    print("countdown ", i)
for i in infinite_sevens():
    print(i)
print(list(numbers(11)))
