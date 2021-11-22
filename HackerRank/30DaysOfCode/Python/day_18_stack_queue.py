class Solution:
    def __init__(self):
        self.stack = []
        self.queue = []

    def pushCharacter(self, ch):
        self.stack.append(ch)
    
    def enqueueCharacter(self, ch):
        self.queue.append(ch)
    
    def popCharacter(self):
        return self.stack.pop()
    
    def dequeueCharacter(self):
        return self.queue.pop(0)


if __name__ == '__main__':
    inp = input()
    s = Solution()
    for i in inp:
        s.pushCharacter(i)
        s.enqueueCharacter(i)
    
    isPalindrome = True
    for i in range(len(inp) // 2):
        if s.popCharacter() != s.dequeueCharacter():
            isPalindrome = False
            break
    if isPalindrome:
        print("The word, "+ inp +", is a palindrome.")
    else:
        print("The word, "+ inp +", is not a palindrome.")