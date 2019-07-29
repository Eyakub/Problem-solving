def running_average_again():
    inp = int(input())
    avg = 0
    s = 0
    if inp <= 100000:
        for i in range(1, inp+1):
            h = int(input())
            s = s + h
            avg = s / i
            print(avg)


running_average_again()