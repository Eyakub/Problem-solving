def arrayDuplicateValue(l):
    repeatList = []
    for i in range(0, len(l)):    
        for j in range(i+1, len(l)):    
            if(l[i] == l[j]):    
                if(l[j] not in repeatList):
                    repeatList.append(l[j]) 


print(arrayDuplicateValue(input().split()))