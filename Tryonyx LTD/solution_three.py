# printing maximum freq in first line
# printing second maximum freq in the second line
# avoid case sensitivity
from collections import Counter


def solution(string):
    # check alphanumeric and removes special character
    string = ''.join(s for s in string if s.isalnum())
    counts = Counter(string.lower())                # counter works like dict and keep track of elements and their count

    max_freq = max(counts.values())                 # getting the max value

    a = list(set(counts.values()))                  # listing the values of dict type Counter
    a.sort()                                        # sorting to get the 2nd highest
    second_freq = a[-2]                             # second highest value

    first_line = []
    second_line = []

    for k, v in counts.items():                     # iterating values to get max and second max letter/letters
        if v == max_freq:                           # checks for max freq values and listing
            first_line.append(k)
        if v == second_freq:                        # check for second highest freq
            second_line.append(k)

    print(' '.join(str(x) for x in first_line))
    print(' '.join(str(y) for y in second_line))


inp = input()
solution(inp)
# solution('Nothing is $ coming up in my mind!')
