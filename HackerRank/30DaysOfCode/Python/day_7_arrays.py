if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))
    arr = [str(x) for x in arr[::-1]]
    print(' '.join(arr))
