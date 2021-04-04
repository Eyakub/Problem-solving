def word_order(n):
    i_list = [input() for _ in range(n)]
    number_of_distinct_number = len(set(i_list))
    individual_count = {}
    for i in i_list:
        if i in individual_count:
            individual_count[i] += 1
        else:
            individual_count[i] = 1
    print(number_of_distinct_number)
    print(' '.join(str(v) for v in individual_count.values()))


if __name__ == "__main__":
    n = int(input())
    word_order(n)
