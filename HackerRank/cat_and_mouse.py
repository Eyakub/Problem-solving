def catAndMouse(x, y, z):
    if abs(x - z) > abs(y - z):
        print("Cat B")
    elif abs(x - z) < abs(y - z):
        print("Cat A")
    elif abs(x - z) == abs(y - z):
        print("Mouse C")


if __name__ == "__main__":
    n = int(input())
    for n_itr in range(n):
        xyz = input().split()
        x = int(xyz[0])
        y = int(xyz[1])
        z = int(xyz[2])
        catAndMouse(x, y, z)
