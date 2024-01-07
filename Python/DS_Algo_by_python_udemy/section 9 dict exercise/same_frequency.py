def check_same_frequency(list1, list2):
    """
    Time complexity: O(n1 + n2)

    Space Comlexity: O(m1 + m2), the function creates two dict
    with as many keys as there are distinct element in list
    """
    def count_element(lst):
        counter = {}
        for value in lst:
            counter[value] = counter.get(value, 0) + 1

    return count_element(list1) == count_element(list2)


list1 = [1, 2, 3, 2, 1]
list2 = [3, 1, 2, 1, 2]
print(check_same_frequency(list1, list2))
