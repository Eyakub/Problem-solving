from collections import OrderedDict


def ordered_dict(n):
    dict_value = OrderedDict()
    for i in range(n):
        items = input().split()
        item_name = " ".join(items[:-1])
        item_price = int(items[-1])
        if dict_value.get(item_name):
            dict_value[item_name] += item_price
        else:
            dict_value[item_name] = item_price

    for key in dict_value.keys():
        print(key, dict_value[key])


if __name__ == '__main__':
    n = int(input())
    ordered_dict(n)
