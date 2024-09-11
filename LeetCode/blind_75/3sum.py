from typing import List


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n_len = len(nums)
        for i in range(n_len):
            for j in range(i+1, n_len):
                for k in range(j+1, n_len):
                    if (nums[i] + nums[j] + nums[k] == 0):
                        pass


sol = Solution()
sol.threeSum([-1, 0, 1, 2, -1, -4])
