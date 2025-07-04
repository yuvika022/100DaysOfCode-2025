def find_peak(arr):
    start = 0
    end = len(arr) - 1

    while start <= end:
        mid = (start + end) // 2

        # Left neighbor (handle edge)
        left = arr[mid - 1] if mid > 0 else float('-inf')
        # Right neighbor (handle edge)
        right = arr[mid + 1] if mid < len(arr) - 1 else float('-inf')

        # If mid is peak
        if arr[mid] >= left and arr[mid] >= right:
            return mid

        # If left is greater, peak must be on the left side
        elif left > arr[mid]:
            end = mid - 1

        # If right is greater, peak must be on the right side
        else:
            start = mid + 1

    return -1  # Just in case, though problem guarantees a peak exists
