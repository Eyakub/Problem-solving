lst = [10, 11, 12, 33, 2, 45, 7]

evn = list(filter(lambda x: x%2==0, lst))
odd = list(filter(lambda x: x%2!=0, lst))
print(odd)