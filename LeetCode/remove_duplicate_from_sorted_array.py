class Solution:
    def removeDuplicates(self, nums):
        """
        Removes duplicates from a sorted list in-place and returns the new length.

        :param nums: List[int] - A sorted list of integers.
        :return: int - The new length of the list with duplicates removed.

        l (left pointer) -> points to the next position to place a unique element.
        r (right pointer) -> scans through the list to find unique elements.
        """
        # If the list has less than 2 elements, no need to remove duplicates.
        if len(nums) < 2:
            return len(nums)

        # Initialize the left pointer to index 1 (second position)
        left = 1

        # Iterate over the list starting from the second element
        for right in range(1, len(nums)):
            # If the current element is not a duplicate of the previous unique element
            if nums[right] != nums[left - 1]:
                print("Right", right)
                print("Left", left)
                print("nums[right]", nums[right])
                print("nums[left - 1]", nums[left - 1])
                # Move the unique element to the left pointer position
                nums[left] = nums[right]
                print("nums", nums)
                # Increment the left pointer to the next position
                left += 1
                print()

        # The left pointer represents the length of the unique elements subarray
        return left


if __name__ == '__main__':
    sol = Solution()
    # Test the function with a sorted list containing duplicates
    result = sol.removeDuplicates([1, 1, 2, 3, 3, 4])
    print("New length of the array with duplicates removed:", result)
