# determine how many distinct words are matched in both sentences


def sentence_similarity(string1, string2):
    c = 0
    string1 = set(string1.split())      # used set to remove duplicate values
    string2 = set(string2.split())      # same goes here to remove duplicate

    for i in string1:                   # lopping the words of string1
        if i in string2:                # condition of matching i with string2
            c += 1                      # if match found, counting here
    return c                            # returning the total number


s1 = input('Enter First String: ')
s2 = input('Enter Second String: ')
print(sentence_similarity(s1, s2))
# print(sentence_similarity('France wins the world cup for the second time',
# 'France beats Argentina in the second round of world cup 2018'))
