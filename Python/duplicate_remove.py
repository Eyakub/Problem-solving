def arrayDuplicateRemove(l):
    repeatList = []
    for i in l:
        if i not in repeatList:
            repeatList.append(i)
    return repeatList

print(arrayDuplicateRemove(input().split()))