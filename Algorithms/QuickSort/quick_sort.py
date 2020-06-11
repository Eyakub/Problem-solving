def partition(arr, start, end):
    pivot = arr[start]            # set the pivot as initially its the first index
    low = start + 1 
    high = end

    while True:
        """
        If the current value we're looking at is larger than the pivot
        it's in the right place(right side of pivot) and we can move left to the next element
        we also need to make sure we haven't surpassed the low pointer, since that
        indicates we have already moved all the elements to their correct side of the pivot
        """
        while low <= high and arr[high] >= pivot:
            high = high - 1
        
        # opposite process of the one above
        while low <= high and arr[low] <= pivot:
            low = low + 1

        # we either found a value for both high and low that is out of order
        # or low is higher than high, in which case we exit the loop
        if low <= high:
            arr[low], arr[high] = arr[high], arr[low]
        else:
            break
    arr[start], arr[high] = arr[high], arr[start]
    return high


def quick_sort(arr, start, end):
    if start >= end:
        return
    # partitioning index that is arr[p] is now
    partition_index = partition(arr, start, end)

    # separately sort elemenets before
    # partition and after partition
    quick_sort(arr, start, partition_index-1)   # before the pivot for first sub-array
    quick_sort(arr, partition_index+1, end)     # after the pivot values (2nd subarray)


if __name__ == "__main__":
    arr = [5, 6, 7, 3, 2, 4]
    arr_len = len(arr)

    quick_sort(arr, 0, arr_len-1)
    print(arr)