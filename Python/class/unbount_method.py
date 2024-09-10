"""
Once a class is instantiated, each method descriptor returns
a function that's bound to that instance
"""


class Example:
    def method(self):
        return 'Done'


e = Example()
print(e.method())
