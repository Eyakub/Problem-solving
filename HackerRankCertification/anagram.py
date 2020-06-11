from collections import Counter


def stringAnagram(dictionary, query):
    # Write your code here
    dict = {}
    lst = []
    for i in range(len(query)):
        for j in dictionary:
            if len(j) == len(query[i]):
                keys = dict.keys()
                if Counter(j) == Counter(query[i]):
                    if query[i] in keys:
                        dict[query[i]] += 1
                    else:
                        dict[query[i]] = 1
        if query[i] not in dict.keys():
            dict[query[i]] = 0

    for v in dict.values():
        lst.append(v)
    print(lst)


if __name__ == "__main__":
    dictionary = ['hack', 'a', 'rank', 'khac', 'ackh','kran',
                  'rankhacker', 'a', 'ab', 'ba', 'stairs', 'raits']
    query = ['a', 'nark', 'bs', 'hack', 'stair']
    stringAnagram(dictionary, query)
