import numpy as np


"""
Time complexity: O(MN) as changes of row column
"""

twoDArray = np.array(
    [[11, 14, 10, 4],
     [10, 14, 11, 5],
     [12, 17, 12, 7],
     [15, 18, 14, 9]]
)


def insert_array(arr, row, one_arr, axis):
    """
    axis = 1 is to insert as column
    axis = 0 is to insert as row
    """
    return np.insert(arr, row, one_arr, axis)


def append_array(arr, one_arr, axis):
    """
    Using Append, no need to pass which column/row you want to insert.
    it will append at the end of that array
    Time complexity: O(mn)
    """
    return np.append(arr, one_arr, axis=axis)


def access_element(arr, row_index, col_index):
    """ Space complexity also: O(1)"""
    if row_index >= len(arr) and col_index >= len(arr[0]):    # TC: O(1)
        print("Incorrect lookup or index")                    # TC: O(1)
    else:
        return arr[row_index][col_index]                      # TC: O(1)


def traverse_two_array(arr):
    """
    but confused about the TC
    TC: O(N^2)
    SC: O(1)
    """
    # for i in range(len(arr)):             # TC: O(MN)
    #     for j in range(len(arr[0])):      # TC: O(N)
    #         print(arr[i][j], end=' ')     # TC: O(1)
    #     print()
    for i, row in enumerate(arr):
        print(f"Row {i + 1}: {' '.join(map(str, row))}")


def search_two_dimen_array(arr, value):
    """
    TC: O(MN) or we can say O(N^2) that's confusing for me
    SC: O(1)
    """
    for i, row in enumerate(arr):                                   # TC: O(MN)
        for j, col in enumerate(row):                               # TC: O(N)
            if col == value:                                        # TC: O(1)
                return f'The value is located at index [{i}][{j}]'
    return "The element is not found"


def delete_from_two_dimen_array(arr, index, axis):
    """
    index means from which index of col/rwo we want to delete
    it depends on axis.
    -> if axis: 0 it delete from row
    -> if axis: 1 it delete from col
    TC: O(MN)
    SC: O(MN)
    """
    return np.delete(arr, index, axis)


one_arr = np.array([[1, 2, 3, 4]])
print("Main array: ", twoDArray)
# print(insert_array(twoDArray, 0, [[1, 2, 3, 4]], 1))
# print(insert_array(twoDArray, 0, [[1, 2, 3, 4]], 0))
# print(insert_array(twoDArray, 1, [[1, 2, 3, 4]], 1))
# print(insert_array(twoDArray, 1, [[1, 2, 3, 4]], 0))

print()
# print(append_array(twoDArray, one_arr, 0))
# print(append_array(twoDArray, [[1, 2, 3, 4]], 1))
# print(append_array(twoDArray, one_arr.T, 1))

# print(access_element(twoDArray, 1, 2))

# traverse_twoD_array(twoDArray)
# print(search_two_dimen_array(twoDArray, 9))
print(delete_from_two_dimen_array(twoDArray, 0, 1))
