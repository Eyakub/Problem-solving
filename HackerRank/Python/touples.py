def tupleHash(arr):
    print(hash(arr))


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    tupleHash(tuple(arr))