from collections import defaultdict

n, m = map(int, input().split())
A = [input() for i in range(n)]
B = [input() for i in range(m)]

d = defaultdict(list)

index = 0

for i in A:
    d[i].append(A.index(i, index) + 1)
    print(d)
    index += 1
for i in B:
    if i not in A:
        print('-1')
    else:
        print(' '.join(map(str, d[i])))


# for i in range(n):
#     d[input()].append(i+1)
# for i in range(m):
#     print(' '.join(map(str, d[input()])) or -1)