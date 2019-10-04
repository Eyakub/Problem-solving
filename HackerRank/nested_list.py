"""
- give test range
- take input in nested list as name & mark
- print the 2nd lowest no's carrier student name, it can be one or more
"""

def nestedList(t):
    # for i in range(t):
    #     mark_list = [[input(), float(input()) for _ in range(n)]]
    # sort_list = sorted(mark_list, key=lambda x: x[1])

    mark_list = [[input(), float(input())] for _ in range(t)]       # taking input till the test no
    mark_sort = set([mark_list[x][1] for x in range(t)])        # get the x[1] values
    mark_sort = list(mark_sort)                          
    mark_sort.sort()                                    # sort the list

    # comparing the 2nd lowest value with other of list values and get them
    mark_list = [x[0] for x in mark_list if x[1] == mark_sort[1]]
    mark_list.sort()
    
    for name in mark_list:
        print(name)


nestedList(int(input()))