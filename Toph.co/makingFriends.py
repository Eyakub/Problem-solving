def makingFriends(n):
    count = 0
    for i in range(1, n):
        if (n % i) == 0:
            count += 1   
    print(count)


n = int(input())
makingFriends(n)