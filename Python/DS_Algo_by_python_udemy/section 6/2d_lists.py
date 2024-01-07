def diagonal_sum(matrix):
    """
    TC: O(n)
    SC: O(1) as only single variable to store the sum
    """
    main_diagonal_sum = 0                   # TC: O(1)
    for i, rows in enumerate(matrix):       # TC: O(n)
        main_diagonal_sum += rows[i]        # TC: O(1)
    return main_diagonal_sum


my_list_2d = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print(diagonal_sum(my_list_2d))
