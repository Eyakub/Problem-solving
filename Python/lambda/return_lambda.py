def myFunc(n):
    print('----n--->', n)
    return lambda x: x * n

myTripler = myFunc(3)
print(myTripler(11))