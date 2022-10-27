def add_message(func):
    def _add_message():
        print("This is decorator function")
        func()
        print("Take care!")
    return _add_message


@add_message
def greet():
    print("Myself Eyakub!")

greet()