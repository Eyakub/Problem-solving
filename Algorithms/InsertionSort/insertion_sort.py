"""
Pseudocode
for i = 1 to n
    key = A[i]
    j = i - 1
    while j >= 0 and A[j] > key
        A[j+1] = A[j]
        j = j - 1
    End while
    A[j+1] = key
End for
"""

def insertion_sort(arr):
    for i in range(1, len(arr)):  # running from 1 index, 0 already sorted
        key = arr[i]              # 2nd elements of an array
        j = i-1                   # back to the first element to check (first, next iter)
        while j >= 0 and (arr[j] > key):
            # moving the right side element to the one position backword
            # until it reaches to the correct position
            arr[j+1] = arr[j]
            j -= 1
        # moving current element to its currect position
        arr[j+1] = key
    return arr


if __name__ == "__main__":
    arr = [4, 5, 6, 2, 1, 9]
    print("Sorted array using Insertion sort: ", insertion_sort(arr))