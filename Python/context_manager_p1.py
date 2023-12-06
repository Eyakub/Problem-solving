import contextlib
from contextlib import contextmanager


@contextmanager
def file(filename, method):
    print("enter")
    file = open(filename, method)
    yield file
    file.close()
    print("exit")


with file("file.txt", "w") as f:
    print("middle")
    f.write("hello")
    
