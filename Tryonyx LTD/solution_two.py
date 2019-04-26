# jumping frog with fixed distance to the opposite of the road side


def solution(x, y, d):
    dis = y - x                      # getting the number of distance that are left
    total_jumps = dis / d            # dividing to get the no of times to jump
    if (dis % d) != 0:               # checking if mod is not equal zero
        total_jumps += 1             # increase one more for the last jump, as greater or equal
    return int(total_jumps)


a, b, c = map(int, input().split())  # taking start, end & distance split with whitespace
print(solution(a, b, c))
# 10 + 30 = 40, 1
# 10 + 30 + 30 = 70, 2
# 10 + 30 + 30 + 30 = 100, 3
