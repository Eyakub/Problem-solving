import os
import sys


def timeConversion(s):
    # is AM and first two elements are 12
    # checking last 2 element of time
    if s[-2:] == "AM" and s[:2] == "12":
        return "00" + s[2:-2]
    # removing AM
    elif s[-2:] == "AM":
        return s[:-2]
    # is PM and first two elements are 12
    elif s[-2:] == "PM" and s[:2] == "12":
        return s[:-2]
    # removing PM
    else:
        return str(int(s[:2]) + 12) + s[2:8]


if __name__ == "__main__":
    s = input()
    print(timeConversion(s))
