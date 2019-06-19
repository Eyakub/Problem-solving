def running_average(test):
    n = 0
    for i in range(3):
        currentTest = i + 1
        a = int(input())
        n = n + a
        avg = n / currentTest
        print(avg)


test = int(input())
running_average(test)