import copy


def shallow_copy():
    original_list = [1, 2, [3, 4]]
    shallow_copied_list = copy.copy(original_list)

    original_list[1] = 3
    shallow_copied_list[2][0] = 100
    shallow_copied_list[0] = 5
    shallow_copied_list[1] = 3

    print(original_list)
    print(shallow_copied_list)


def deep_copy():
    original_list = [1, 2, [3, 4]]
    deep_copied_list = copy.deepcopy(original_list)

    deep_copied_list[2][0] = 100

    print(original_list)
    print(deep_copied_list)


shallow_copy()
print()
# deep_copy()
