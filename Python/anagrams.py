from collections import Counter


# An anagram is a word or phrase formed by 
# rearranging the letters of a different word or phrase,
def checkAnagams():
    str_1, str_2, str_3 = "acbde", "abced", "abcda"
    cnt_1, cnt_2, cnt_3  = Counter(str_1), Counter(str_2), Counter(str_3)

    if cnt_1 == cnt_2:
        print('1 and 2 anagram')
    if cnt_1 == cnt_3:
        print('1 and 3 anagram')


checkAnagams()