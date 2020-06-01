import re


def rem_vowel_regex(string):
    # return (re.sub("[aeiouAEIOU]", "", string))
    return "".join(c for c in string if c.lower() not in "aeiou")


# why O is not replacing
def rem_vowel(string):
    for i in 'aeiouAEIOU':
        string = string.replace(i, '')
    return string


string = 'This websIte is for losers LOL!'

print(rem_vowel(string))