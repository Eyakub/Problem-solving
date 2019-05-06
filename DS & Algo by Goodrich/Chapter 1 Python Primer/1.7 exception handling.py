import collections


def sum(values):
    if not isinstance(values, collections.Iterable):
        raise TypeError("Parameter must be an iterable type")
    total = 0
    for v in values:
        if not isinstance(v, (int, float)):
            raise TypeError("Elements must be numeric")
        total += v
    return total


print(sum([3.14, 55]))