def findPercentage(n):
    list_dict = {}  # for all the dict
    for i in range(n):
        key, a, b, c = input().split(" ")
        key, value = key, [a, b, c]
        single_dict = {key: value}  # storing them as dict
        list_dict.update(single_dict)  # append in dict every single dict
    name = input()
    if name in list_dict.keys():
        total = sum(list(map(float, list_dict[name])))
        average = total / 3
        print("{0:.2f}".format(average))


test_case = int(input())
findPercentage(test_case)


# if __name__ == '__main__':
#     n = int(input())
#     student_marks = {}
#     for _ in range(n):
#         name, *line = input().split()
#         scores = list(map(float, line))
#         student_marks[name] = scores
#     query_name = input()

