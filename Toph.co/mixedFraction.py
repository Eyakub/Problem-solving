def mixed_fraction(n, d):
    if d < n:
        a = n // d
        b = n % d
    print(a, b, d)


n, d = input().split(' ')
mixed_fraction(int(n), int(d))