# Python object oriented programming

"""
    Suppose we have a class called '''Math''', 
    but to invoke method like ''ceil'', ''floor''
    we don't want to create instance/object of the '''Math''' class, 
    so we make ''static''

    For ex:
    Math.floor(3.14)

    is much better than

    mymath = Math()
    mymath.floor(3.14)

    so in some case, static methods are useful..

    cons:
    They don't have access to instance variables.

    class Foo(object):
        def __init__(self):
            self.bar = 'bar'

        def too(self):
            print self.bar

        @staticmethod
        def foo():
            print self.bar

    Foo().too() # works
    Foo.foo() # doesn't work
"""

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

    @staticmethod
    def is_workday(day):
        if day.weekday() == 5 or day.weekday() == 6:
            return False
        return True


class Developer(Employee):
    raise_amount = 1.10
    
    def __init__(self, first, last, pay, prog_lang):
        super().__init__(first, last, pay)
        self.prog_lang = prog_lang



class Manager(Employee):
    
    def __init__(self, first, last, pay, employees=None):
        super().__init__(first, last, pay)
        if employees is None:
            self.employees = []
        else:
            self.employees = employees
    
    def add_employee(self, emp):
        if emp not in self.employees:
            self.employees.append(emp)

    def remove_employee(self, emp):
        if emp in self.employees:
            self.employees.remove(emp)
    
    def print_employees(self):
        for emp in self.employees:
            print('--->', emp.fullname())


emp_1 = Employee('Eyakub', 'Sorkar', 50000)
dev_1 = Developer('Oyshi', 'Tabassum', 60000, 'Python')
dev_2 = Developer('Aditi', 'Tabassum', 60000, 'Python')

mgr_1 = Manager('Eyakub', 'Sorkar', 90000, [dev_1])

# print(mgr_1.email)
# mgr_1.add_employee((dev_2))
# mgr_1.print_employees()

print(isinstance(mgr_1, Manager))
print(issubclass(Manager, Employee))
print(issubclass(Manager, Developer))

# emp_str_1 = "Eyakub-Sorkar-70000"
# emp_str_2 = "Oyshi-Tabassum-6000"

# new_emp_1 = Employee.from_string(emp_str_1)
# Employee.set_raise_amount(1.06)
# print(Employee.raise_amount)
# print(new_emp_1.email)

# import datetime
# my_date = datetime.date(2019, 8, 22)
# print(Employee.is_workday(my_date))

