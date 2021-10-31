def solve(t):
    for i in range(t):
        s = input()
        print(s[0::2] + " " + s[1::2])

if __name__ == '__main__':
    t = int(input())
    solve(t)
