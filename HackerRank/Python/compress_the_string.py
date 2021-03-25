from itertools import groupby


def compress_the_string(str):
    # whatever how many in list, will count
    # print(sum(1 for _ in [1, 2, 3, 4]))
    result = [(int(label), sum(1 for _ in group)) for label, group in groupby(str)]
    print(' '.join(['(%s, %s)' % (v, k) for k, v in result]))
    # for key, group in groupby(str):
    #     print((len(list(group)), int(key)), end=" ")
    


if __name__ == '__main__':
    # s = input()
    s = "1222311"
    compress_the_string(s)