class Employee:
    def __init__(self, first, last):
        self.first = first
        self.last = last
    
    @property
    def email(self):
        return '{}_{}@eyakub.me'.format(self.first.lower(), self.last.lower())

    # as we used property on the method, we can call this method without () this
    @property
    def fullname(self):
        return '{} {}'.format(self.first, self.last)
    
    @fullname.setter
    def fullname(self, name):
        first, last = name.split(' ')
        self.first = first
        self.last = last
    
    @fullname.deleter
    def fullname(self):
        print('Deleted name!')
        self.first = None
        self.last = None
    


emp_1 = Employee('Eyakub', 'Sorkar')
emp_1.fullname = 'Sorkar Eyakub'
print(emp_1.first)
print(emp_1.email)
print(emp_1.fullname)

del emp_1.fullname