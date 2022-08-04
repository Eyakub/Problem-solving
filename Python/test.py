def solution(arr):
    x = y = z = 0
    for i in range(len(arr)-1):
        x = x + arr[i]
        y = 0
        for j in range(len(arr)-1):
            y = y + arr[j]
            z = 0
            for k in range(len(arr)-1):
                z = 3
        x = x + y
    return x + y + z


if __name__ == '__main__':
    print(solution([1,2]))