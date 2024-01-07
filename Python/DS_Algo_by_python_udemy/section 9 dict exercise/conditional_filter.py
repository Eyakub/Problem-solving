def filter_dict(my_dict, condition) -> dict:
    """
    Time complexity: O(n), where n is the number of elements in the dict

    Space complexity:
        best case: O(1) when no dict value match the condition
        worst case: O(N)
    """
    filtered_dict = {key: value for key,
                     value in my_dict.items() if condition(key, value)}
    return filtered_dict


# Example usage:
my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4}

result_dict = filter_dict(my_dict, (lambda key, value: value % 2 == 0))
print(result_dict)
