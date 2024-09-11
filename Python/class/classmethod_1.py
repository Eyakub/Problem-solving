"""
@classmethod:
Takes cls as the first parameter, representing the class.
Can access class-level variables and methods.
Can be used to create alternative constructors or methods that work on the class level.

@staticmethod:
Does not take cls or self as a parameter.
Behaves like a regular function, but belongs to the class's namespace.
Can be used when the method neither relies on class nor instance-specific data.
"""


class Employee:
    num_employees = 0  # Class-level variable

    def __init__(self, name):
        self.name = name
        Employee.num_employees += 1  # Modify class-level variable

    @classmethod
    def employee_count(cls):
        return cls.num_employees

    def employee_total(self):
        return self.num_employees


# Creating instances
emp1 = Employee("John")
emp2 = Employee("Jane")

# Using class method to get the count of employees
print(Employee.employee_count())  # Output: 2
