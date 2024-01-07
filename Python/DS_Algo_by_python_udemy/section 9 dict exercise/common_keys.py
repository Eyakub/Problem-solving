def merge_dicts(dict1: dict[str, int], dict2: dict[str, int]) -> dict:
    """
    merge dict
    """
    common_dict = dict1.copy()
    for key, value in dict2.items():
        if key in common_dict:
            common_dict[key] += value
        else:
            common_dict.setdefault(key, value)
    print("After merge: ", common_dict)


dict_a = {'a': 1, 'b': 2, 'c': 3}
dict_b = {'b': 3, 'c': 4, 'd': 5}

merge_dicts(dict_a, dict_b)
