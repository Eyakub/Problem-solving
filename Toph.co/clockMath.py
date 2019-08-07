def clockAngle(h, m):
    res = 0.5 * (60 * h - 11 * m)
    if res < 0:
        print("{0:.4f}".format(res * (-1), 4))
    elif res <= 180:
        print("{0:.4f}".format(res, 4))
    elif res <= 360:
        print("{0:.4f}".format((360-res), 4))


h = int(input())
m = int(input())
clockAngle(h, m)