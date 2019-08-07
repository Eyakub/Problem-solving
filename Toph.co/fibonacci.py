# 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
def fibonacciNumbers(n):
    if n < 0:
        return 
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacciNumbers(n-1) + fibonacciNumbers(n-2)


def fibonacciEasy(n):
    a, b = 0, 1
    if n < 0:
        return
    elif n == 0:
        return a
    elif n == 1:
        return b
    else:
        for i in range(2, n):
            c = a + b
            a = b
            b = c
        return b


n = int(input())
print(fibonacciNumbers(n))
print(fibonacciEasy(n))