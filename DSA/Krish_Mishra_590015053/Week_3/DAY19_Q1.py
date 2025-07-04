def search_in_rotated_array(arr, target):
    start = 0
    end = len(arr) - 1

    while start <= end:
        mid = (start + end) // 2

        # If element is found
        if arr[mid] == target:
            return mid

        # Check if left half is sorted
        if arr[start] <= arr[mid]:
            if arr[start] <= target < arr[mid]:  # Target is in left half
                end = mid - 1
            else:  # Target is in right half
                start = mid + 1
        else:
            # Right half is sorted
            if arr[mid] < target <= arr[end]:  # Target is in right half
                start = mid + 1
            else:  # Target is in left half
                end = mid - 1

    # If not found
    return -1
