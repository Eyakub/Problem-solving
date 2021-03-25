# global variable scope
x = "awesome"

def myfunc():
    global x    # if we want to define inner scope x as global 
    x = "fantastic"
    print("-----inside function----->", x)


myfunc()

print('---global scope variable--->', x)