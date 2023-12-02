def findSum(numbers, queries):
    result = []
    for query in queries:
        l, r, x = query
        sub_numbers = numbers[l-1:len(query)-1]
        sum_of_non_zero = sum(num for num in sub_numbers if num != 0)

        zero_count = sub_numbers.count(0)
        final_result = sum_of_non_zero + zero_count * x
        result.append(final_result)
    return result


if __name__ == '__main__':
    numbers_count = int(input().strip())

    numbers = []

    for _ in range(numbers_count):
        numbers_item = int(input().strip())
        numbers.append(numbers_item)

    queries_rows = int(input().strip())
    queries_columns = int(input().strip())

    queries = []

    for _ in range(queries_rows):
        queries.append(list(map(int, input().rstrip().split())))

    result = findSum(numbers, queries)
    print('\n'.join(map(str, result)))
