def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr)//2    # getting the mid off array
        L = arr[:mid]
        R = arr[mid:]
        
        merge_sort(L)   # sorting the first sub-array
        merge_sort(R)   # sorting the 2nd sub-array

        i = j = k = 0

        # Copy data to temp arrays L[] and R[]
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        
        # checking if any elements was left
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1
        

if __name__ == "__main__":
    arr = [5, 6, 4, 3, 1, 9, 8]
    merge_sort(arr)
    print("Sorted array is: ", arr)