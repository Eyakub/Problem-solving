"""
check with all adjucent element to swap
5, 4, 6, 7, 3
4, 5, 6, 7, 3
this way...
"""
def bubble_sort(arr, length):
    for i in range(length):
        flag = False
        for j in range(0, length-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                flag = True
        if flag == False:
            break
    print(arr)


if __name__ == "__main__":
    arr = [5, 6, 7, 4, 3, 9]
    bubble_sort(arr, len(arr))