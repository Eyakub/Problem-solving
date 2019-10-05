def checkNoPower(n=16):
    
    if n % 2 == 0:
        count = 0
        for x in range(0, n+1, 2):
            s = x
            if s / 2 == 0:
                s = s / 2
                count = count + 1
                print('count ', count)


checkNoPower()