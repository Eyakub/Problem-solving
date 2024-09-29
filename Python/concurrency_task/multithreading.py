"""
Multithreading:
Multithreading means running multiple threads (smaller units of processes) within the same process. It's like having multiple hands doing different tasks simultaneously, but all hands are part of the same person.

Best for I/O-bound tasks: 
Tasks that spend more time waiting (e.g., file I/O, network requests) benefit from multithreading. Examples include web scraping, file operations, or database queries.

Memory efficient: Threads share the same memory space, making it lighter and more efficient for certain operations.

GIL (Global Interpreter Lock) constraint: Python's GIL only allows one thread to execute at a time in the context of CPU-bound tasks. As a result, multithreading may not improve performance for CPU-intensive operations.

Lower overhead: Creating and switching between threads is faster and requires less memory compared to processes.
Example use cases: Web scraping, file reading/writing, network requests, input/output operations.
"""
import time
import threading


def calc_square(numbers):
    print("calculate square numbers")
    for n in numbers:
        time.sleep(0.2)
        print('square:', n*n)


def calc_cube(numbers):
    print("calculate cube of numbers")
    for n in numbers:
        time.sleep(0.2)
        print('cube:', n*n*n)


arr = [2, 3, 8, 9]

t = time.time()

# calc_square(arr)
# calc_cube(arr)

t1 = threading.Thread(target=calc_square, args=(arr,))
t2 = threading.Thread(target=calc_cube, args=(arr,))

t1.start()
t2.start()

t1.join()
t2.join()

print("done in : ", time.time() - t)

print("Hah... I am done with all my work now!")
