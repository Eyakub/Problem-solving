def multiply_by(factor):
    """ Return a function that multiplies values by the given factor """
    def multiply(value):
        """ multiply the given value by the factor already provided """
        return value * factor
    return multiply


times2 = multiply_by(2)
print(times2(5))
print(times2(10))

times3 = multiply_by(3)
print(times3(5))
print(times3(10))
