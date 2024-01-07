def first_second(my_list):
    my_list = sorted(my_list, reverse=True)     # TC: O(n)
    return my_list[0], my_list[1]


first_second([1, 2, 3, 4])
