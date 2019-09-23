def arrayDuplicateValue(l):
    repeatList = []
    filterRepeatList = []
    for i in range(0, len(l)):    
        for j in range(i+1, len(l)):    
            if(l[i] == l[j]):    
                repeatList.append(l[j]) 
    
    # removing duplication
    for n in repeatList:
        if n not in filterRepeatList:
            filterRepeatList.append(n)
    return filterRepeatList


print(arrayDuplicateValue(input().split()))