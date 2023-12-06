def func(f):
    def wrapper():
        print("Started")
        f()
        print("ended")
    return wrapper


@func
def func2():
    print("I am func2")

@func
def func3():
    print("I am func3")


# x = func("Hello")
# y = func(func2)
# print(y) 

func2()
func3()