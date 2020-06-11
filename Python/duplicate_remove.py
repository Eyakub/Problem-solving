def arrayDuplicateRemove(l):
    repeatList = []
    for i in l:
        if i not in repeatList:
            repeatList.append(i)
    return repeatList

def arrayDuplicateRemove1(l):
    return list(dict.fromkeys(l))

def arrayDuplicateRemoveInline(l):
    res = []
    [res.append(x) for x in l if x not in res]
    return res
# print(arrayDuplicateRemove(input().split()))
l = [1, 2, 3, 4, 5, 6, 4, 3, 1, 9]
print(arrayDuplicateRemove(l))
print('-'*21)
print(arrayDuplicateRemove1(l))
print('-'* 21)
print(arrayDuplicateRemoveInline(l))