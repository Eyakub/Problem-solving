"""
Given an unsorted array of integers nums,
return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.
"""
from typing import List


class Solution:
    def longest_consecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        seq_count = 1
        longest = 1
        nums_len = len(nums)
        nums.sort()             # [1, 2, 3, 4, 100, 200, 201]
        for i in range(1, nums_len):
            # 2 != 1    | 3 != 2
            # jehetu sorted, tai same value na check kortese
            if nums[i] != nums[i-1]:
                # 2 == 2, jehetu next, prev same na tai +1 kore dekhtese sequence e ache kina
                if nums[i] == nums[i-1] + 1:
                    print("==>", nums[i], nums[i-1] + 1)
                    seq_count += 1
                else:
                    # jodi sequence e na thake tahole longest nicche ar seq_count reset to 1
                    longest = max(longest, seq_count)
                    seq_count = 1
        return max(longest, seq_count)

    def longest_consecutive2(self, nums: List[int]) -> int:
        longest = 0
        nums_set = set(nums)            # convert list to set for o(1)
        print("Num set: ", nums_set)    # {1, 2, 3, 100, 4, 200, 201}
        for num in nums_set:
            if num - 1 not in nums_set:
                print("num - 1: ", num, num-1)
                current_num = num
                current = 1

                while current_num + 1 in nums_set:
                    current_num += 1
                    current += 1
                    print("Current num in while: ", current_num)
                longest = max(current, longest)
            else:
                print("Else")
        return longest


sol = Solution()
print(sol.longest_consecutive([100, 4, 200, 201, 1, 3, 2]))
