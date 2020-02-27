def insertList(a1, a2):
    val = arr_insert.insert(a1, a2)
    return val

def removeList(r1):
    return arr_insert.remove(r1)

def popList(arr_insert):
    return arr_insert.pop()

def sortList(arr_insert):
    return arr_insert.sort()

def appendList(a1):
    arr_insert.append(a1)

def reverseList(arr_insert):
    arr_insert.reverse()


arr_insert = []
if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        arr = input().split(' ')
        if arr[0] == 'insert':
            a1, a2 = int(arr[1]), int(arr[2])
            insertList(a1, a2)
        if arr[0] == 'print':
            print(arr_insert)
        if arr[0] == 'remove':
            r1 = int(arr[1])
            removeList(r1)
        if arr[0] == 'append':
            appendList(int(arr[1]))
        if arr[0] == 'sort':
            sortList(arr_insert)
        if arr[0] == 'pop':
            popList(arr_insert)
        if arr[0] == 'reverse':
            reverseList(arr_insert)
