"""
 Write a Python program to get a string from a given string 
 where all occurrences of its first char have been changed to '$', 
 except the first char itself. Go to the editor
Sample String : 'restart'
Expected Result : 'resta$t'
"""
def changeFirstChar(str):
    first_char = str[0]
    str1 = str.replace(first_char, '$')
    return first_char + str1[1:]

if __name__ == "__main__":
    # str = input()
    str = 'restart'
    print(changeFirstChar(str))