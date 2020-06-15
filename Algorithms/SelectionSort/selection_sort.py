def selection_sort(arr, arr_len):
    for i in range(arr_len-1):
        min_index = i
        print('min-index-> ', min_index)
        for j in range(i+1, arr_len):
            print('j-> ', j)
            if arr[j] < arr[min_index]:
                print('arr[j] -> ', arr[j], '   ','arr[min]-> ', arr[min_index])
                min_index = j
                print('current_min_index-> ', min_index)
        print('swap-> ', arr[min_index], arr[i])
        print('\n')
        arr[min_index], arr[i] = arr[i], arr[min_index]
    print(arr)


if __name__ == "__main__":
    arr = [4, 5, 6, 2, 1, 9]
    selection_sort(arr, len(arr))

"""
everytime when it got a lower value, changes the index to the lower value


min-index->  0
j->  1
j->  2
j->  3
arr[j] ->  2     arr[min]->  4
current_min_index->  3
j->  4
arr[j] ->  1     arr[min]->  2
current_min_index->  4
j->  5
swap->  1 4


min-index->  1
j->  2
j->  3
arr[j] ->  2     arr[min]->  5
current_min_index->  3
j->  4
j->  5
swap->  2 5


min-index->  2
j->  3
arr[j] ->  5     arr[min]->  6
current_min_index->  3
j->  4
arr[j] ->  4     arr[min]->  5
current_min_index->  4
j->  5
swap->  4 6


min-index->  3
j->  4
j->  5
swap->  5 5


min-index->  4
j->  5
swap->  6 6
"""