# both words carries same alphabet or not
# sort words and check both are equal

def anagramCheck(word1, word2):
    if len(word1) != len(word2):
        print('No')
    elif(sorted(word1) == sorted(word2)):
        print('Yes')
    else:
        print('No')


word1 = input()
word2 = input()
anagramCheck(word1, word2)
