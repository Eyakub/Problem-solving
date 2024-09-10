import functools


def memorize(func):
    """
    cache the results of the function so it doesn't need to be called
    again, if the same arguments are provided a second time
    """
    cache = {}

    @functools.wraps(func)
    def wrapper(*args):
        if args in cache:
            return cache[args]
        print(f"Calling {func.__name__}")
        result = func(*args)

        cache[args] = result
        return result
    return wrapper


@memorize
def multiply(x, y):
    return x*y


print(multiply(4, 5))
