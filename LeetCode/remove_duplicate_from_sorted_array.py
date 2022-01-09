class Solution:
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        l -> pointer will move only for unique characters
        r -> pointer will move if characters are duplicate
        """
        if len(nums)<2:
            return len(nums)
        l = 1
        for r in range(1,len(nums)):
            if nums[r]!=nums[l-1]:
                nums[l]=nums[r]
                l+=1

        return l
        

if __name__ == '__main__':
    sol = Solution()
    print(sol.removeDuplicates([1,1,2]))