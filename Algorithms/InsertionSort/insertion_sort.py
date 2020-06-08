"""
Pseudocode
for i = 0 to n
    key = A[i]
    j = i - 1
    while j >= 0 and A[j] > key
        A[j+1] = A[j]
        j = j - 1
    End while
    A[j+1] = key
End for
"""

def insertion_sort(arr, length):
    for i in range(1, length):
        

def display():
    pass

if __name__ == "__main__":
    arr = [4, 5, 6, 2, 1, 9]
    insertion_sort(arr, len(arr))