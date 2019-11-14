def birthdayChocolate(arr, d, m):
    r_count = 0
    if m in arr:
        for i in range(len(arr)):
            if m + arr[i] == d:
                r_count += 1
    print(r_count)


if __name__ == "__main__":
    n = int(input().strip())
    arr = list(map(int, input().rstrip().split()))
    dm = input().rstrip().split()
    d = int(dm[0])
    m = int(dm[1])
    birthdayChocolate(arr, d, m)
