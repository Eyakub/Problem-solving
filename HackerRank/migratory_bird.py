import re
import os
import math
from itertools import groupby


def migratoryBirds(arr=[1, 2, 3, 4, 5, 4, 2, 2, 1, 3, 4]):
    unique_list = list(set(arr))
    count_list = []  # storing the max values KEY
    count_dict = {}  # storing the values as KEY, VALUE after count

    # print([len(list(group)) for key, group in groupby(sorted(arr))])
    # print({x: arr.count(x) for x in arr})

    for i in arr:  # loop through the arr
        if i in count_dict:  # checking the array value available in count_dict
            count_dict[i] = count_dict.get(i) + 1  # if i exist in count dict add+1
        else:
            count_dict[i] = 1  # if i not exist in count_dict count just 1
    itemMaxValue = max(
        count_dict.items(), key=lambda x: x[1]
    )  # getting max values from dict
    for key, value in count_dict.items():  # loop for the filtered dict
        if (
            value == itemMaxValue[1]
        ):  # if count_dict max value matches with the filtered dict max values
            count_list.append(key)  # store the key of those max value

    print(min(count_list))


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().strip().split()))
    result = migratoryBirds(arr)
