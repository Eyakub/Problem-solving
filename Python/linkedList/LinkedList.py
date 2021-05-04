# create node
class Node:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    # insert at the beginning
    def insert_at_beginning(self, name, age):
        new_node = Node(name, age)
        new_node.next = self.head
        self.head = new_node

    # insert after a node
    def insert_after_node(self, node, name, age):
        if node is None:
            print("The given previous node must be in linkedlist")
            return
        
        new_node = Node(name, age)
        new_node.next = node.next
        node.next = new_node

    # insert at the end of a node
    def insert_end_of_node(self, name, age):
        new_node = Node(name, age)

        if self.head is None:
            self.head = new_node
            return
        
        last = self.head
        while(last.next):
            last = last.next

        last.next = new_node

    # deleting a node
    def delete_node(self, position):
        if self.head is None:
            return
        temp_node = self.head

        if position == 0:
            self.head = temp_node.next
            temp_node = None
            return
        
        # find the key to be deleted
        for i in range(position - 1):
            temp_node = temp_node.next
            if temp_node is None:
                break
        
        # if the key is not present
        if temp_node is None:
            return
        
        if temp_node.next is None:
            return
        
        next = temp_node.next.next
        temp_node.next = None
        temp_node.next = next

    def print_list(self):
        temp_node = self.head
        while(temp_node):
            print(str(temp_node.name) + " ", end="\n")
            temp_node = temp_node.next


if __name__ == "__main__":
    list1 = LinkedList()
    list1.insert_end_of_node('eyakub', 22)
    list1.insert_at_beginning('sorkar', 23)
    list1.insert_at_beginning('md eyakub', 24)
    list1.insert_end_of_node('mdes', 35)
    list1.insert_after_node(list1.head.next, 'eeyakub', 26)

    print("Linked list: ")
    list1.print_list()

    print("\nAfter deleting an element: ")
    list1.delete_node(3)
    list1.print_list()
