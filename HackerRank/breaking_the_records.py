def breakingTheRecords(arr):
    highest_count = lowest_count = 0
    max = min = arr[0]
    for i in range(len(arr)):
        if max < arr[i]:
            max = arr[i]
            highest_count += 1
        if min > arr[i]:
            min = arr[i]
            lowest_count += 1
    print(highest_count, lowest_count, sep=" ")


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    breakingTheRecords(arr)
