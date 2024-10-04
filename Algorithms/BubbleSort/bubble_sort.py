"""
check with all adjucent element to swap
5, 4, 6, 7, 3
4, 5, 6, 7, 3

this way...

3, 4, 1, 5, 2 (len = 5)
i = 0:  len(5-0-1) = 4
    j = 0: 3 > 4 (no swap, flag False)  => 3, 4, 1, 5, 2
    j = 1: 4 > 1 (swap, flag True)      => 3, 1, 4, 5, 2
    j = 2: 3 > 5 (no swap, flag True)   => 3, 1, 4, 5, 2
    j = 3: 5 > 2 (swap, flag True)      => 3, 1, 4, 2, 5

i = 1:  len(5-1-1) = 3
    j = 0: 3 > 1 (swap, flag True)      => 1, 3, 4, 2, 5
    j = 1: 3 > 4: (no swap, flag True)  => 1, 3, 4, 2, 5
    j = 2: 4 > 2: (swap, flag True)     => 1, 3, 2, 4, 5

i = 2: len(5-2-1) = 2
    j = 0: 1 > 3 (no swap, flag False)   => 1, 3, 2, 4, 5
    j = 1: 3 > 2 (swap, flag True)    => 1, 2, 3, 4, 5

i = 3: len(5-3-1) = 1
    j = 0: 1 > 2 (no swap, flag False)
"""


def bubble_sort(arr, length):
    """
    TC: O(n^2)
    SC: O(1)
    as after each iteration of the inner loop, the largest element is bubbled to the end of the array. that's why we are using length-i-1 to reduce the number of iterations of the inner loop.
    """
    for i in range(length):
        # flag = False
        for j in range(0, length-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                # flag = True
        # if flag is False:
        #     break
    print(arr)


if __name__ == "__main__":
    # arr = [5, 6, 7, 4, 3, 9]
    arr = [3, 4, 1, 5, 2]
    bubble_sort(arr, len(arr))
