def anagrams(str, lst):
    anagram_lst = []
    for s in lst:
        if sorted(str) == sorted(s):
            anagram_lst.append(s)
    return anagram_lst
    # return [item for item in words if sorted(item)==sorted(word)]


if __name__ == '__main__':
    # n = input()
    print(anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada']))
