def palindromeCheck(s):
    conv = s.lower()
    # this time complexity is O(n)
    print('Yes') if conv == conv[::-1] else print('No')


def palindromeCheckByTwoPointer(s):
    # this line is for checking special character
    s = ''.join(char for char in s if char.isalnum()) # time -> O(n), space -> O(n)
    print(s)
    s.lower() # O(n)
    
    start = 0
    end = len(s) - 1


    # O(n)
    while start < end:
        if s[start] != s[end]:
            return False
        start += 1
        end -= 1
    # n + n + n
    return "True"

s = input()
print(palindromeCheckByTwoPointer(s))
