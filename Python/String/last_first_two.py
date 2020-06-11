"""
Write a Python program to get a string made of the first 2 and 
the last 2 chars from a given a string. 
If the string length is less than 2, 
return instead of the empty string
"""
def firstLastTwoString(str):
    if len(str) >= 2:
        return str[:2] + str[-2:]
    else:
        return 'Empty String'

if __name__ == "__main__":
    # str = input()
    str = "w"
    print(firstLastTwoString(str))