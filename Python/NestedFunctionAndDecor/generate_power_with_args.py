def generate_power(exponent):
    def power(func):
        def inner_power(*args):
            print('args->', args, func.__name__)
            base = func(*args)
            return base ** exponent
        return inner_power
    return power


@generate_power(2)
def raise_two(n):
    return n


print(raise_two(5))