my_dict = {'name': 'eyakub', 'age': 28}

"""
Python clear method
TC: O(n)
my_dict.clear()
"""


"""
Python dictionary copy
my_dict.copy() that creates a copy of original one
"""


def dict_copy(my_dict):
    """without .copy() method, updating new variable will
    update the original dict also"""
    new_dict = my_dict.copy()
    new_dict.update({'country': 'BD'})
    print(new_dict)


dict_copy(my_dict)


"""
fromkeys()
new_dict = {}.fromkeys([1, 2, 3], 0)
output: {1: 0, 2: 0, 3: 0}
"""

"""
get()
items()
keys()
popitem() ----
pop() ---- remove and return the item

setdefault() ---- dict.setdefault('city', 'Dhaka')
if city does exist will get the existing value or create new key with city and value Dhaka

values()
"""
