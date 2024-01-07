
def count_word_frequency(words):
    """
    TC: O(n) as rest takes O(1), so combined comes the result
    SC: O(n) as count_dict taking input as every unique words
    """
    count_dict = {}
    for i, value in enumerate(words):           # TC: O(n)
        if value in count_dict:
            count_dict[value] += 1
        else:
            count_dict.setdefault(value, 1)
    return count_dict


words = ['apple', 'orange', 'banana', 'apple', 'orange', 'apple']
print(count_word_frequency(words))
