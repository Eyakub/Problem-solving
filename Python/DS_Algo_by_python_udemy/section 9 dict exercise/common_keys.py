def merge_dicts(dict1: dict[str, int], dict2: dict[str, int]) -> dict:
    """
    merge dict
    TC: O(N)
    SC: O(m+n) worst case
        O(n) or O(m) whichever is larger as
        the merged dictionary has both dict element
    """
    common_dict = dict1.copy()          # TC: O(n)
    for key, value in dict2.items():    # TC: O(n)
        if key in common_dict:
            common_dict[key] += value
        else:
            common_dict.setdefault(key, value)
    print("After merge: ", common_dict)


dict_a = {'a': 1, 'b': 2, 'c': 3}
dict_b = {'b': 3, 'c': 4, 'd': 5}

merge_dicts(dict_a, dict_b)
