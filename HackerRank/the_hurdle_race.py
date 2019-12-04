def hurdleRace(k, heights):
    max_height = max(heights)
    if k >= max_height:
        return 0
    else:
        return max_height - k


if __name__ == "__main__":
    nk = input().split()
    n = int(nk[0])
    k = int(nk[1])

    heights = list(map(int, input().rstrip().split()))
    print(hurdleRace(k, heights))
