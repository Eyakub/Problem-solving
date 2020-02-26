def insertList(arr):
    arr = [int(i) for i in arr]
    print(arr)

def removeList(arr):
    pass

def popList(arr):
    pass

def displayList(arr):
    pass

def sortList(arr):
    pass

def appendList(arr):
    pass

def reverseList(arr):
    pass


if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        arr = input().split(' ')
        if arr[0] == 'insert':
            insertList(arr[1:])
        if arr[0] == 'print':
            print('print')
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
