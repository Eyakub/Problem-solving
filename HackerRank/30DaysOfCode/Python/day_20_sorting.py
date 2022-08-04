def bubble_sort(arr):                               # 3 2 1
    count = 0
    for i in range(len(arr)):                       # 0 1 2 -> 0
        for j in range(len(arr)-1):                 # 0 1   -> 0
            if arr[j] > arr[j+1]:                   # 3 > 2 -> 3 > 1
                count = count + 1
                arr[j+1], arr[j] = arr[j], arr[j+1] # 2 3 1 -> 2 1 3 
    return arr, count


if __name__ == '__main__':
    n = int(input().strip())
    a = list(map(int, input().rstrip().split()))
    sorted_arr, count = bubble_sort(a)
    print(f"Array is sorted in {count} swaps.\nFirst Element: {sorted_arr[0]}\nLast Element: {sorted_arr[len(sorted_arr)-1]}")