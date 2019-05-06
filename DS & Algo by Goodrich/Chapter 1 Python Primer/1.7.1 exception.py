def sqrt(x):
    if not isinstance(x, (int, float)):
        raise TypeError('X must be numeric')
    elif x < 0:
        raise ValueError("X can't be negative")
    else:
        return x*x


print(sqrt(9))
