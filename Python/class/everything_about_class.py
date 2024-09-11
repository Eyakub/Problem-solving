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
from statistics import mean


class Person:
    def __init__(self, name, age, location):
        self._name = name           # Protected attribute (by convention)
        self._age = age             # Protected but still accessible
        self.__location = location  # Private (mangled) attribute

    @property
    def name(self):
        return self._name

    @property
    def age(self):
        return self._age

    @age.setter
    def age(self, value):
        if value < 1 or value > 120:
            raise ValueError("Age must be between 1 and 120")
        self._age = value

    @classmethod
    def from_birth_year(cls, name, birth_year, location):
        """Create a Person instance using birth year."""
        from datetime import datetime
        current_year = datetime.now().year
        age = current_year - birth_year
        return cls(name, age, location)

    @property
    def location(self):
        return self.__location

    @location.setter
    def location(self, value):
        self.__location = value


class Student(Person):
    def __init__(self, name, age, location):
        super().__init__(name, age, location)
        self._grades = []

    @property
    def grades(self):
        return self._grades

    @property
    def grade(self):
        return self._calculate_grade()

    def add_grade(self, grade):
        if 0 <= grade <= 100:
            self._grades.append(grade)
        else:
            raise ValueError("Grade must be between 0 and 100")

    def _calculate_grade(self):
        if self._grades:
            return self._calculate_mean(self._grades)
        return 0  # No grades present

    @staticmethod
    def _calculate_mean(numbers):
        return mean(numbers)

    @classmethod
    def from_grades(cls, name, birth_year, location, grades):
        """Create a Student instance with initial grades."""
        student = cls.from_birth_year(name, birth_year, location)
        for grade in grades:
            student.add_grade(grade)
        return student


# Usage of Person class with classmethod
p = Person.from_birth_year("Eyakub", 1994, "Dhaka")
print(f"Name: {p.name}, Age: {p.age}, Location: {p.location}")

# You can still access the protected attribute using name mangling (not recommended)
# print(p._Person__location)  # Prints location using name mangling

# Setter example
p.age = 30
print(f"Updated Age: {p.age}")

# Student class usage
s = Student("Eyakub", 20, "Shanirakhra")
s.add_grade(37)
s.add_grade(50)
s.add_grade(77)
s.add_grade(88)
print(f"Student's Average Grade: {s.grade}\n")

# Using classmethod to create a student with initial grades
s2 = Student.from_grades("Rahim", 2002, "Dhaka", [60, 70, 80, 90])
print(f"Name: {s2.name}, Age: {s2.age}, Location: {s2.location}, Average Grade: {s2.grade}")
