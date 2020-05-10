def symmetric_diff():
    m = int(input())
    m_arr = set(map(int, input().split()))
    n = int(input())
    n_arr = set(map(int, input().split()))

    dif = (m_arr.difference(n_arr)).union(n_arr.difference(m_arr))
    for i in sorted(list(dif)):
        print(i)


symmetric_diff()