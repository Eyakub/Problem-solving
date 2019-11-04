def listComprehensions(a, b, c, n):
    print(
        [
            [x, y, z]
            for x in range(a + 1)
            for y in range(b + 1)
            for z in range(c + 1)
            if x + y + z != n
        ]
    )


x, y, z, n = [int(input()) for _ in range(4)]
listComprehensions(x, y, z, n)

