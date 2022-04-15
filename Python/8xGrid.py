def solution():
    pass

def printGrid(grid):
    for i in range(len(grid)):
        print(grid[i])


def setGrid(grid, row, col):
    row = ord(row) - 49
    col = ord(str(col)) - 65
    print(row, col)
    grid[row][col] = 1


def making_grid(n):
    gridline = []
    for i in range(n):
        gridline.append("-")
    grid = []
    for i in range(n):
        grid.append(list(gridline))
    return grid


if __name__ == '__main__':
    
    grid_size = input("Grid size of battlefield: ")
    grid = making_grid(int(grid_size))

    n = int(input("Choose number of target: "))
    for i in range(n):
        index = input()
        row, col = index[1], index[0]

        setGrid(grid, row, col)
    
    printGrid(grid)