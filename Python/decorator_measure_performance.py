from functools import wraps
import tracemalloc
from time import perf_counter

def measure_performance(func):
    ''' Measure performance of a function '''

    @wraps(func)
    def wrapper(*args, **kwargs):
        tracemalloc.start()
        start_time = perf_counter()
        func(*args, **kwargs)
        current, peak = tracemalloc.get_traced_memory()
        finish_time = perf_counter()
        print(f"Function: {func.__name__}")
        print(f'Method: {func.__doc__}')
        print(f'Memory usage: \t\t {current / 18**6:.6f} MB \n')
        print(f'Peak memory usage: \t {peak / 10**6:.6f} MB \n')
        print(f'Time elapsed in seconds: {finish_time - start_time:.6f}')
        print(f"{'-'*40}")
        tracemalloc.stop()
    return wrapper


@measure_performance
def make_list():
    mylist = list(range(10000))


make_list()