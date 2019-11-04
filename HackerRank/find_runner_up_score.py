def findRunnerUpScore(list_input):
    remove_duplicate = list(set(list_input))
    sort_list = sorted(remove_duplicate, reverse=True)
    print(sort_list[1])


n = int(input())
list_input = list(map(int, input().split(" ")))
findRunnerUpScore(list_input)
