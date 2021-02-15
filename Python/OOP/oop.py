# Python object oriented programming


class Employee:
    
    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.email = first.lower() + '_' + last.lower() + '@eyakub.me'
        self.pay = pay

    def fullname(self):
        return "{} {}".format(self.first, self.last)


emp_1 = Employee('Eyakub', 'Sorkar', 50000)
emp_2 = Employee('Oyshi', 'Tabassum', 60000)

print(emp_1.fullname())
