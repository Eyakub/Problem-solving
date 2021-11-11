def binary_numbers(n):
    bin_no = ''
    while n > 0:
        reminder = n % 2
        n = n // 2
        bin_no += str(reminder)

    def consecutive_max(lst=bin_no[::-1]):
        cons_list = []
        count, result = 0, 0
        for i in range(len(lst)):
            if lst[i] == '0':
                count = 0
            else:
                count += 1
                result = max(result, count)
        print(result)
    consecutive_max()


if __name__ == '__main__':
    n = int(input())
    binary_numbers(n)
