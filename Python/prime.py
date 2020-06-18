def isPrime(n):
    for i in range(2, n):
        if n % 2 == 0:
            break
    else:
        return n


def prime_list(n=100):
    lst = []
    for i in range(2, n):
        num = isPrime(i)
        if num:
            lst.append(num)
    return lst


def choice():
    n = int(input("1. Prime Check\n2. Generate Prime to interval number\n\nOnly choose any one: "))
    if n == 1:
        num = int(input("Enter your number to check prime or not: "))
        print("Prime Number") if isPrime(num) else print("Not Prime")
    if n == 2:
        num = int(input("Enter the interval number to generate Prime list: "))
        print(prime_list(num))


if __name__ == "__main__":
    choice()
