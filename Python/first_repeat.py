# first repeated number from array/list

def first_repeat():
    found_list = {}
    list = [1, 2, 3, 1, 4, 5, 4]
    for index, x in enumerate(list):
        # print(index, x)
        # print(list[:index+1])
        # print('count: ', list[:index+1].count(x)) # x the index value how many times exist
        # print()
        if list[:index+1].count(x) > 1:
            print(x)
            break
    return "None"

first_repeat()