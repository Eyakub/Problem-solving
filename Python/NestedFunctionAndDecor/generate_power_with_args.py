def generate_power(exponent):
    def power(func):
        def inner_power(*args):
            base = func(*args)
            print('args->', args, func.__name__, base)
            return base ** exponent
        return inner_power
    return power


@generate_power(2)
def raise_two(n):
    return n


print(raise_two(5))
