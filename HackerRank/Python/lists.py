def insertList(a1, a2):
    return res.insert(a1, a2)

def removeList(arr):
    pass

def popList(arr):
    pass

def sortList(arr):
    pass

def appendList(arr):
    pass

def reverseList(arr):
    pass

if __name__ == "__main__":
    n = int(input())
    res = []
    for _ in range(n):
        arr = input().split(' ')
        print('arr-> ', arr)
        if arr[0] == 'insert':
            a1, a2 = arr[1], arr[2]
            res.append(insertList(int(a1), int(a2)))
        if arr[0] == 'print':
            print(res)
        if arr[0] == 'remove':
            print('remove')
        if arr[0] == 'append':
            pass
        if arr[0] == 'sort':
            pass
        if arr[0] == 'pop':
            pass
        if arr[0] == 'reverse':
            pass
