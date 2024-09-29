"""
Multiprocessing:
Multiprocessing creates separate processes, each with its own memory space. This is like having multiple chefs, each working independently in their own kitchen. Each process has its own memory, so there's no conflict.

Best for CPU-bound tasks:
Tasks that require a lot of CPU processing power benefit from multiprocessing. Examples include data analysis, machine learning, or scientific computing.

Bypasses GIL:
Each process has its own Python interpreter and memory space, allowing true parallel execution without being limited by the GIL.

Memory efficient:
Each process has its own memory space, making it more memory-efficient for tasks that require large amounts of memory.

Higher overhead:
Creating and switching between processes is slower and requires more memory compared to threads.

Example use cases: Data analysis, machine learning, scientific computing, large-scale simulations.
"""
import multiprocessing
import time


def calc_square(numbers):
    for n in numbers:
        time.sleep(3)
        print('square:', n*n)


def calc_cube(numbers):
    for n in numbers:
        time.sleep(3)
        print('cube:', n*n*n)


if __name__ == "__main__":
    arr = [2, 3, 8, 9]
    p1 = multiprocessing.Process(target=calc_square, args=(arr,))
    p2 = multiprocessing.Process(target=calc_cube, args=(arr,))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print("Done!")
