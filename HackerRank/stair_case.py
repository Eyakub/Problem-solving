def stairCase(n):
    for i in range(1, n + 1):
        print(("#" * i).rjust(n))


if __name__ == "__main__":
    n = int(input())
    stairCase(n)
