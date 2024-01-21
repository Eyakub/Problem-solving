def recursive_method(n):
    if n < 1:
        print("n is less thn 1")
    else:
        recursive_method(n-1)
        print(n)


recursive_method(5)
