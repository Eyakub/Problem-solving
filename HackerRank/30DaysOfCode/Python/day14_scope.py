class Difference:
    def __init__(self, arr):
        self.__elements = arr
        self.maximum_difference = 0
        
    def compute_difference(self):
        self.maximum_difference = max(self.__elements) - min(self.__elements)
        
        
if __name__ == '__main__':
    _ = input()
    a = [int(e) for e in input().split(' ')]
    d = Difference(a)
    d.compute_difference()
    print(d.maximum_difference)