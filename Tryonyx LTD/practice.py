# printing maximum freq in first line
# printing second maximum freq in the second line
# avoid case sensitivity


# def solution(string):
#     Alphabet = [
#         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
#         'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
#     ]
#
#     hits = [
#         (Alphabet[i], string.lower().count(Alphabet[i]))
#         for i in range(len(Alphabet))
#         if string.count(Alphabet[i])
#     ]
#
#     for letter, frequency in hits:
#         print(letter.lower(), frequency)
#
#
# print(solution('Nothing is coming up in my mind!'))


#     for n in string.lower():
#         keys = alp_dict.keys()
#         if n in keys:
#             alp_dict[n] += 1
#         else:
#             alp_dict[n] = 1
#     return sorted(alp_dict)


def getSecondMostFreq(str):
    NO_OF_CHARS = 256

    # Initialize count list of
    # 256 size with value 0
    count = [0] * NO_OF_CHARS

    # count number of occurrences
    # of every character.
    for i in range(len(str)):
        count[ord(str[i])] += 1

    first, second = 0, 0

    # Traverse through the count[]
    # and find second highest element.
    for i in range(NO_OF_CHARS):

        # If current element is smaller
        # than first then update both
        # first and second
        if count[i] > count[first]:

            second = first
            first = i

            # If count[i] is in between
        # first and second
        # then update second */
        elif (count[i] > count[second] and
              count[i] != count[first]):

            second = i

            # return character
    return chr(second)


print(getSecondMostFreq('Nothing is $ coming up in my mind!'))
