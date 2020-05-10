def no_idea():
    n, m = input().split()
    n_arr = set(map(int, input().split()))

    A = set(map(int, input().split()))
    B = set(map(int, input().split()))

    happiness = 0

    for i in n_arr:
        if i in A:
            happiness += 1
        if i in B:
            happiness -= 1
    print(happiness)


def no_idea1():
    n, m = (int(i) for i in input().split())
    l = map(int, input().strip().split(' '))
    a = set(map(int, input().strip().split(' ')))
    b = set(map(int, input().strip().split(' ')))
    result = 0
    for i in l:
        if i in a:
            result += 1
        if i in b:
            result += -1
    print(result)


no_idea()