from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        res = {}
        for i, num in enumerate(nums):
            if target - num in res:
                return [res[target-num], i]
            res[num] = i                       # setup index no for the numbers


sol = Solution()
print(sol.twoSum([4, 5, 6, 1, 2], 5))
