def solution(arr):
    ans = map(
        lambda sub_arr: [x**x for x in sub_arr if x > 0], arr
    )
    return ans


if __name__ == '__main__':
    n = int(input())
    arr = []
    for _ in range(n):
        arr.append(list(map(int, input().split())))

    ans = solution(arr)
    for row in ans:
        print(' '.join(map(str, row)))
