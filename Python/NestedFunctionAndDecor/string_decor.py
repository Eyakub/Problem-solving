def decor(fun):
    def inner(n):
        result = fun(n)
        result += ' how are you?'
        return result
    return inner

@decor
def hello(name):
    return 'hello ' + name

print(hello('Eyakub'))