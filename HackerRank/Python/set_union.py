def set_union():
    n = int(input())
    n_set = set(map(int, input().split()))
    m = int(input())
    m_set = set(map(int, input().split()))

    print(len(n_set.union(m_set)))


set_union()