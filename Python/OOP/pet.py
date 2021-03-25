class Pet:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def show(self):
        print(f"I am {self.name} and I'm {self.age} years old")

    def speak(self):
        print("I don't know what to say...")

class Cat(Pet):
    def __init__(self, name, age, color):
        super().__init__(name, age)
        self.color = color

    def speak(self):
        print('Meow...')

    def show(self):
        print(f"I'm {self.name} and I'm {self.age} years old and I'm {self.color}")


class Dog(Pet):
    def speak(self):
        print("Bark...")


class Fish(Pet):
    pass


p = Pet("Tim", 19)
p.speak()

c = Cat("Bill", 25, "Brown")
c.speak()
c.show()

d = Dog("Jill", 25)
d.speak()

f = Fish("Bubbles", 11)
f.speak()