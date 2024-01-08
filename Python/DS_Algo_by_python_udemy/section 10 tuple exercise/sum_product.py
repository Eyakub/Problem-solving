from functools import reduce
import math


def sum_product(inp_tuple):
    total_sum = sum(inp_tuple)
    total_product = reduce(lambda x, y: x * y, inp_tuple)
    total_product1 = math.prod(inp_tuple)
    print(total_sum, total_product1)


sum_product((1, 2, 3, 4))
