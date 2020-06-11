def checkNoPower(n=16):
    res = 0
    if n % 2 == 0:
        count = 0                   # count for divisible no of times
        s = n
        for x in range(n, 2, -2):   # max range to minimum range 2, that will less -2 as sequence
            if s % 2 == 0:          # checking no reminder
                s = s // 2          # divide the number
                count = count + 1   # count the no of times it's divided
        
        for i in range(count):      # as it's checking power of 2, multiply it
            res = res + (2*2)

    if n == res:
        print('True')
    else:
        print('False')


checkNoPower(218)