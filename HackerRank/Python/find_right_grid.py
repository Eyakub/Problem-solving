def solution(grid, m):
    t_sum = 0
    for i in range(m):
        if i == 0:
            t_sum = sum(grid[i])
        else:
            for j in range(len(grid[i])):
                last_index = len(grid[i])
                if j == last_index - 1:
                    t_sum = t_sum + grid[i][j]
    return t_sum


if __name__ == '__main__':
    grid = [[1, 5, 3], [1, 3, 1], [1, 7, 1]]
    print(solution(grid, len(grid)))
