def palindromeCheck(s):
    conv = s.lower()
    print('Yes') if conv == conv[::-1] else print('No')


s = input()
palindromeCheck(s)