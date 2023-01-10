def generate_power(exponent):
    def power(base):
        return base ** exponent
    return power

raise_two = generate_power(2)
print(raise_two(4))
print(raise_two(3))