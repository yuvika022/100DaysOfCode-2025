def max_subarray_sum(nums):
    # 1. Bug in original logic: Resetting current_sum to 0 for negative values
    #    fails for arrays with all negative numbers.
    # 2. To handle all negative numbers, we initialize current_sum and max_sum to nums[0]
    # 3. For arr = [-3, -2, -1, -4], this will correctly return -1.

    current_sum = max_sum = nums[0]

    for i in range(1, len(nums)):
        current_sum = max(nums[i], current_sum + nums[i])
        max_sum = max(max_sum, current_sum)

    return max_sum


# Test Case:
arr = [-3, -2, -1, -4]
print("Maximum Subarray Sum:", max_subarray_sum(arr))  # Output should be -1
