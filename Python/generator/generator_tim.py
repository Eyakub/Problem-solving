class Generator:
    def __init__(self, n) -> None:
        self.n = n
        self.last = 0

    def __next__(self):
        return self.next()

    def next(self):
        if self.last == self.n:
            raise StopIteration()

        rv = self.last ** 2
        self.last += 1
        return rv


g = Generator(100000000000)

while True:
    try:
        print(next(g))
    except StopIteration:
        break
