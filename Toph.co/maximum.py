test_case = int(input())
list_inp = []
for i in range(test_case):
    a = int(input())
    list_inp.append(a)
list_inp.sort()
print(list_inp[-1])

# def max_num_from_user_inp(n):
#     list_t = []
#     while n != 0:
#         a = int(input())
#         list_t.append(a)
#         n = n - 1
#     return max(list_t)

# n = int(input())
# print(max_num_from_user_inp(n))