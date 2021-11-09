def binary_numbers(n):
    bin_no = ''
    while n > 0:
        reminder = n % 2
        n = n // 2
        bin_no += str(reminder)
    return bin_no[::-1]
        


if __name__ == '__main__':
    n = int(input())
    print(binary_numbers(n))