def isVowel(c): 
    if (c == 'a' or c == 'A' or c == 'e' or 
        c == 'E' or c == 'i' or c == 'I' or 
        c == 'o' or c == 'O' or c == 'u' or c == 'U'): 
        return True
    return False


def reverseVowel(string):
    j = 0
    vowel = [0] * len(string)
    print('vowel...', vowel)
    string = list(string)
    print('string...', string)

    # storing the vowels separately
    for i in range(len(string)):
        if isVowel(string[i]):
            vowel[j] = string[i]
            print('vowel[j]...', vowel[j])
            j += 1

    for i in range(len(string)):
        if isVowel(string[i]):
            j -= 1
            string[i] = vowel[j]

    return ''.join(string)


print(reverseVowel('eyakub'))