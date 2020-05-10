def set_discard_pop():
    n = int(input())
    arr_set = set(map(int, input().split()))

    N = int(input())
    for i in range(N):
        inp = input().split()
        if inp[0] == 'pop':
            arr_set.pop()
        if inp[0] == 'remove':
            arr_set.remove(int(inp[1]))
        if inp[0] == 'discard':
            arr_set.discard(int(inp[1]))
    print(sum(arr_set))


set_discard_pop()