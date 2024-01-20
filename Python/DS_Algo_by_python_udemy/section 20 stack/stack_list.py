class Stack:
    def __init__(self) -> None:
        self.list = []

    def __str__(self) -> str:
        values = self.list.reverse()
        values = [str(x) for x in self.list]
        return '\n'.join(values)

    def is_empty(self):
        if self.list == []:
            return True
        return False

    def push(self, value):
        self.list.append(value)
        return "The element has been successfully inserted"

    def pop(self):
        if self.is_empty():
            return "There is no element avaiable in the stack"
        return self.list.pop()

    def peek(self):
        if self.is_empty():
            return "There is no any element in the stack"
        return self.list[len(self.list)-1]

    def delete(self):
        self.list = None


customStack = Stack()
print(customStack.push(1))
print(customStack.push(2))
print(customStack.push(3))

# print(customStack.pop())
print(customStack.peek())

# print(customStack)
