def max_value_key(mydict) -> str:
    """
    Time complexity: O(n)
    """
    max_value = 0
    for key, value in mydict.items():
        if value > max_value:
            max_value = value
    max_key = next(
        (key for key, value in mydict.items() if value == max_value))
    return max_key


def max_value_key1(mydict) -> str:
    return max(mydict, key=lambda k: mydict[k], default=None)


my_dict = {'a': 5, 'b': 9, 'c': 2}
print(max_value_key1(my_dict))
