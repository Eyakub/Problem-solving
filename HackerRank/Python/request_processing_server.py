def count_drop(server):
    dropCount = 0
    numThreads = 0
    for i in range(len(server)):
        if server[i] > 0:
            numThreads = numThreads + server[i]
        elif server[i] == -1:
            if numThreads > 0:
                print("thread less->")
                numThreads = numThreads - 1
            else:
                dropCount = dropCount + 1
    return dropCount


if __name__ == '__main__':
    inp = int(input())
    arr = []
    for i in range(inp):
        arr.append(int(input()))
    print(count_drop(arr))