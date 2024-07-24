def fibonacci(n):
    """
    5 = 3 + 2   # f(n) = f(n-1) + f(n-2)
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34...

    TC: 
    SC:
    """
    assert n >= 0 and int(n) == n, 'It has to be integer number'
    if n in [0, 1]:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)


def fibonacci_iterative(n):
    """ printing fib start to n-th """
    fib_sequence = [0, 1]
    for i in range(2, n):
        fib_sequence.append(fib_sequence[i-1] + fib_sequence[i-2])
    return fib_sequence


print("The Fibonacci numbers are:", fibonacci_iterative(10))


# print(fibonacci(7))
