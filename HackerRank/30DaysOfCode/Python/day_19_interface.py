class AdvanceArithmetic(object):
    def divisorSum(n):
        raise NotImplementedError

class Calculator(AdvanceArithmetic):
    def divisorSum(self, n):
        divisor_lst = []
        for i in range(1, n+1):
            if n % i == 0:
                divisor_lst.append(i)
        return sum(divisor_lst)


if __name__ == '__main__':
    n = int(input())
    my_calculator = Calculator()
    s = my_calculator.divisorSum(n)
    print("I implemented: " + type(my_calculator).__bases__[0].__name__)
    print(s)