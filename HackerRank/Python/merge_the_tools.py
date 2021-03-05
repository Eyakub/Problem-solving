def merge_the_tools(s, n):
    for i in range(0, len(s), n):
        non_distinct_string = s[i:i+n]
        merge = ""
        for ch in non_distinct_string:
            if ch not in merge:
                merge += ch
        print(merge)
        # print(''.join(set(non_distinct_string)))
    # print([s[i:i+n] for i in range(0, len(s), n)])


if __name__ == '__main__':
    s, k = input(), int(input())
    merge_the_tools(s, k)