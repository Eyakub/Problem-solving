# space complexity: O(n)

def sum(n):
    if n <= 0:
        return 0
    return n + sum(n-1)

sum(3)