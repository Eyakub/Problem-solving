import collections


def main():
    X = int(input())
    size2count = collections.Counter(map(int, input().split()))
    money = 0
    N = int(input())
    for _ in range(N):
        size, price = map(int, input().split())
        if size in size2count and size2count[size]:
            size2count[size] -= 1
            money += price

    print(money)


if __name__ == '__main__':
    main()
