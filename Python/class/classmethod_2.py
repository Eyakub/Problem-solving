import datetime


class Employee:
    num_of_emps = 0
    raise_amount = 1.04

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@company.com'
        Employee.num_of_emps += 1

    def fullname(self):
        return f'{self.first} {self.last}'

    @classmethod
    def from_string(cls, emp_str):
        first, last, pay = emp_str.split('-')
        return cls(first, last, pay)

    @classmethod
    def is_workday(cls, day):
        if day.weekday() == 5 or day.weekday() == 6:
            return False
        return True


emp_1 = Employee('John', 'Doe', 50000)
emp_2 = Employee('Jane', 'Doe', 60000)

emp_str_1 = 'John-Doe-70000'
emp_str_2 = 'Jane-Doe-80000'

new_emp_1 = Employee.from_string(emp_str_1)

print(new_emp_1.email)
print(new_emp_1.fullname())

my_date = datetime.date.today()

print(Employee.is_workday(my_date))
