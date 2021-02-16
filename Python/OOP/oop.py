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

    @classmethod
    def set_raise_amount(cls, amount):
        cls.raise_amount = amount

    @classmethod
    def from_string(cls, emp_str):
        first, last, pay = emp_str.split("-")
        return cls(first, last, pay)


emp_1 = Employee('Eyakub', 'Sorkar', 50000)
emp_2 = Employee('Oyshi', 'Tabassum', 60000)

emp_str_1 = "Eyakub-Sorkar-70000"
emp_str_2 = "Oyshi-Tabassum-6000"

new_emp_1 = Employee.from_string(emp_str_1)
# Employee.set_raise_amount(1.06)
print(Employee.raise_amount)
print(new_emp_1.email)

