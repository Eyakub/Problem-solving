def friend(x):
    friend_lst = []
    for i in x:
        if len(i) == 4:
            friend_lst.append(i)
    return friend_lst
    # return [f for f in x if len(f) == 4]


lst = ['Ryan', 'Kieran', 'Mark']
print(friend(lst))