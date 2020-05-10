def intro_set(array):
    list_to_set = set(arr)
    avg = sum(list_to_set)/len(list_to_set)
    return avg

if __name__ == "__main__":
    n = int(input())
    array = [int(input()) for i in range(n)]
    result = intro_set(array)
    print(result)