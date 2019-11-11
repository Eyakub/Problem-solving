import math
import os
import random
import re
import sys


def gradingStudents(arr):
    final_grade = []
    for i in range(len(arr)):
        if arr[i] >= 38:
            res = math.ceil(arr[i] / 5)
            res = abs((res * 5) - arr[i])
            if res < 3:
                final_grade.append(res + arr[i])
            if res >= 3:
                final_grade.append(arr[i])
        else:
            final_grade.append(arr[i])
    # printing INT list on new line
    print("\n".join(map(str, final_grade)))


if __name__ == "__main__":
    # arr = [73, 67, 38, 33]
    n = int(input())
    grades = []
    for _ in range(n):
        grades.append(int(input()))
    gradingStudents(grades)
