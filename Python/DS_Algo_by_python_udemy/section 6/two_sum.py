def solution(nums, target):
    """
    Find pairs
    """
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] == nums[j]:
                continue
            if nums[i] + nums[j] == target:
                print(i, j)


solution([2, 4, 3, 5, 6, -2, 4, 7, 8, 9], 7)
