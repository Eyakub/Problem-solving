class Solution:
    def firstDuplicate(self, nums):
        res = {}
        for i, n in enumerate(nums):
            if n in res:
                return n
            res[n] = i
        return -1

    def first_duplicate_index(self, nums):
        res = {}
        for i, n in enumerate(nums):
            if n in res:
                return i
            res[n] = i
        return -1


sol = Solution()
print(sol.firstDuplicate([1, 2, 3, 4, 1, 5, 6, 7, 8, 9, 1]))
print(sol.first_duplicate_index([1, 2, 3, 4, 1, 5, 6, 7, 8, 9, 1]))
