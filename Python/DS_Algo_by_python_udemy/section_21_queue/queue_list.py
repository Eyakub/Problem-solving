class Queue:
    def __init__(self) -> None:
        self.items = []

    def __str__(self) -> str:
        values = [str(x) for x in self.items]
        return ' '.join(values)

    def is_empty(self):
        if self.items == []:
            return True
        return False

    def enqueue(self, value):
        self.items.append(value)        # TC: O(N)
        return "The element is inserted at the end of queue"

    def dequeue(self):
        if self.is_empty():
            return "There is no item in the queue"
        return self.items.pop(0)        # TC: O(N)

    def peek(self):
        if self.is_empty():
            return "There is no item in the queue"
        return self.items[0]        # TC: O(1)

    def delete(self):
        self.items = None           # TC: O(1)


customQueue = Queue()
customQueue.enqueue(1)
customQueue.enqueue(2)
customQueue.enqueue(3)
# print(customQueue)
print(customQueue.peek())
print(customQueue)
