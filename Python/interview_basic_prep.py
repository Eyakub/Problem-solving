# short list without using sort keyword

def solution_sort(lst) -> list:
    updated_list = []
    min_value = 0
    for i in range(len(lst)):
        for j in range(i+1, len(lst)):
            if lst[i] > lst[j]:
                lst[i], lst[j] = lst[j], lst[i]

    return lst


# print(solution_sort([4, 5, 2, 1, 7]))


def solution_palindrome(pal_str) -> bool:
    return True if pal_str == pal_str[::-1] else False


def solution_palindrome_alt(pal_str) -> bool:
    n = len(pal_str)
    flag = 0
    for i in range(n):
        if pal_str[i] == pal_str[n-i-1]:
            flag = 1
    return True if flag == 1 else False


# print(solution_palindrome_alt('madam'))


"""
sort a dictionary / by using dict comprehension
"""


def solution_sort_dict(dict1) -> tuple:
    sorted_keys = sorted(dict1)
    updated_dict = {}
    for i in sorted_keys:
        updated_dict[i] = dict1[i]

    updated_dict2 = {k: dict1[k] for k in sorted(dict1)}
    return updated_dict, updated_dict2


dict1 = {5: "apple", 3: "Mango", 6: "Grapes", 8: "Banana"}
# print(solution_sort_dict(dict1))


"""
Find the pair with a given number in a list
"""


def solution_pair(lst, k):
    n = len(lst)
    for i in range(n):
        for j in range(i+1, n):
            if k == lst[i] + lst[j]:
                print(f"Pair: [{lst[i]} {lst[j]}]")


# solution_pair([2, 4, 6, 9, 1, 3, 5], 10)


"""
create a fibonacci series using recursion

solution_fib_list:
TC: O(N)
SC: O(N)
"""


def solution_fibb_memo(n, memo={}):
    """This issue can be mitigated by using memoization (caching previously calculated values)
    or by using an iterative approach, which reduces the time complexity to O(n)."""
    if n in [0, 1]:
        return n
    if n not in memo:
        print("IF: ", memo)
        memo[n] = solution_fibb_memo(n-1, memo) + solution_fibb_memo(n-2, memo)
    else:
        print("ELSE", memo)
    return memo[n]


def solution_fibb(n):
    if n in [0, 1]:
        return n
    else:
        return solution_fibb(n-1) + solution_fibb(n-2)


def solution_fib_list(n):
    lst = [0, 1]                            # O(1)
    for i in range(2, n):                   # O(N)
        lst.append(lst[i-1] + lst[i-2])     # O(1)
        # print(lst)
    return lst


print(solution_fibb_memo(5))

"""
Find the required output like string reverse
TC & SC: O(N)
"""


def solution_string_reverse(string1):
    return ' '.join(string1.split()[::-1])


# print(solution_string_reverse("I love Python"))


"""
Find the maximum repeated character in a string without
having on2 complexity

TC: O(N) as string1 is max character, 
and 2nd loop can go up to max n times so it becomes O(N)

SC: O(N)
"""


def solution_max_character(string1):
    char_dict = {}
    for i in string1:
        if i not in char_dict.keys():
            char_dict.update({i: 1})
        else:
            char_dict[i] += 1
    print(char_dict)

    # the below block is similar to 125 line
    max_key = None
    max_value = None
    for key, value in char_dict.items():
        if max_value is None or value > max_value:
            max_value = value
            max_key = key
    print(f"Max Key: {max_key}")
    # print(max(char_dict, key=char_dict.get))


# solution_max_character("ilovepython")


"""
get max value and min value without using built in function
TC: O(N)
SC: O(1)
"""


def solution_max_min(lst):
    max_value = lst[0]
    min_value = lst[0]
    for i in lst:
        if i > max_value:
            max_value = i
        if i < min_value:
            min_value = i
    print(max_value, min_value)


# solution_max_min([1, 5, 6, 7, 2, 9])
