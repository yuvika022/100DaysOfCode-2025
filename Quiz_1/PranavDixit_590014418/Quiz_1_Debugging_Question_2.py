def find_max(arr):
    # 1. Bug in original C code: Variable 'max' was not initialized.
    #    In Python, we must initialize max to arr[0] to compare properly.
    # 2. Without initialization, the logic would fail or raise errors.
    # 3. This corrected version works for all array types.

    max_val = arr[0]

    for i in range(1, len(arr)):
        if arr[i] > max_val:
            max_val = arr[i]

    return max_val


# Test Case:
arr = [-3, -2, -1, -4]
print("Maximum Element:", find_max(arr))  # Output should be -1
