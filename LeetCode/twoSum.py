class Solution:
    def twoSum(self, nums, target):
        res = {}
        for i, n in enumerate(nums):        # TC: o(n)
            if target - n in res:           # TC: O(1)
                return [res[target-n], i]   # TC: O(1)
            res[n] = i                      # TC: O(1)


result1 = Solution()
print(result1.twoSum([1, 2, 3, 4], target=6))
