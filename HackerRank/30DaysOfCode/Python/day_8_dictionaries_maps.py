def solve(n):
    phone_book = dict(input().split() for _ in range(n))
    while True:
        try:
            name = input()
            if name in phone_book:
                print(name + "=" + phone_book[name])
            else:
                print("Not found")
        except EOFError:
            break


if __name__ == '__main__':
    n = int(input())
    solve(n)