# Python object oriented programming


class Employee:

    num_of_emps = 0
    raise_amount = 1.04

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.email = first.lower() + '_' + last.lower() + '@eyakub.me'
        self.pay = pay

        Employee.num_of_emps += 1

    def fullname(self):
        return "{} {}".format(self.first, self.last)

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)

emp_1 = Employee('Eyakub', 'Sorkar', 50000)
emp_2 = Employee('Oyshi', 'Tabassum', 60000)

print(emp_1.num_of_emps)

