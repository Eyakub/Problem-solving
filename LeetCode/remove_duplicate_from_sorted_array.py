class Solution:
    def removeDuplicates(self, nums):
        if len(nums)<2:
            return len(nums)
        """
        :type nums: List[int]
        l -> pointer will move only for unique characters
        r -> pointer will move if characters are duplicate
        """
        l = 0
        for r in range(1,len(nums)):
            if nums[r]!=nums[l]:
                nums[l]=nums[r]
                l+=1

        return l+1


if __name__ == '__main__':
    sol = Solution()
    print(sol.removeDuplicates([1,1,2]))