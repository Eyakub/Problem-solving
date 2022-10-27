class Node:
    def __init__(self, data):
        self.right = self.left = None
        self.data = data

class Solution:
    def insert(self, root, data):
        if root == None:
            return Node(data)