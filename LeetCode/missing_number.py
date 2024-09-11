def solution(arr) -> int:
    """
    Formula: n * (n-1)/2
    -> This formula represents the sum of integers from 0 to n-1
    -> It is commonly used when the series starts from 0.

    Formula: n * (n + 1)/2
    -> this formula represents the sum of integers from 1 to n
    -> it is commonly used when the series starts from 1
    """
    n = len(arr) + 1
    expected_sum = n * (n - 1) // 2  # Sum of integers from 0 to n-1
    actual_sum = sum(arr)  # Sum of elements in the given list
    missing_num = expected_sum - actual_sum
    return missing_num


print(solution([9, 6, 4, 2, 3, 5, 7, 0, 1]))
# print(solution([0]))
