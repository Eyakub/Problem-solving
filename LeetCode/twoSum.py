class Solution:
    def twoSum(self, nums, target):
        res = {}
        for i, n in enumerate(nums):
            if target - n in res:
                return [res[target-n], i]
            res[n] = i
        

result1 = Solution()
print(result1.twoSum([1, 2, 3, 4], target=6))
