# min, max without using default function


def minmax(data):
    small = big = data[0]       # assign first data as small and big for initial
    for val in data:
        if val < small:
            small = val
        if val > big:
            big = val
    return small, big


data = [1, 2, 3, 4, 5, 0]
print(minmax(data))


# min, max using built in function
def minmaxBuildIn(data):
    for val in data:
        return min(data), max(data)


print(minmaxBuildIn(data))
