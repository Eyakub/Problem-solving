def checkPrime(n):
    if n > 1:
        for i in range(2, n):
            if (n % i) == 0:
                print('No')
                break
        else:
            print('Yes')
    else:
        print('No')


n = int(input())
checkPrime(n)