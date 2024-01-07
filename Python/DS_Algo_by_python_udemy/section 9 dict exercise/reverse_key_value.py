def reverse_dict(mydict) -> dict:
    """
    Time complexity: O(N)
    """
    new_dict = {value: key for key, value in mydict.items()}
    return new_dict


my_dict = {'a': 1, 'b': 2, 'c': 3}
print(reverse_dict(my_dict))
