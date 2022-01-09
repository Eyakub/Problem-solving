class Solution:
    def removeElement(self, nums, val):
        # nums = list(filter(lambda x: x!=val, nums))
        # return len(nums)
        # while val in nums:
        #     nums.remove(val)
        # return len(nums)

        # accepted answer
        l = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[l] = nums[i]
                l += 1
        return l


if __name__ == '__main__':
    sol = Solution()
    print(sol.removeElement([1, 1, 2, 2], 2))