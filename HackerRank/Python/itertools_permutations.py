from itertools import permutations


if __name__ == "__main__":
    a, b = input().split()
    for i in sorted(permutations(a, int(b))):
        print(''.join(i))