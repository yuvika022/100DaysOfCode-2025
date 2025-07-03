def dutch_national_flag_sort(arr):
    low = 0           # Start of the 1st region (0s)
    mid = 0           # Current element being examined
    high = len(arr) - 1  # End of the 3rd region (2s)

    while mid <= high:
        if arr[mid] == 0:
            arr[low], arr[mid] = arr[mid], arr[low]
            low += 1
            mid += 1
        elif arr[mid] == 1:
            mid += 1
        else:  # arr[mid] == 2
            arr[mid], arr[high] = arr[high], arr[mid]
            high -= 1
    return arr

# Taking user input
user_input = input("Enter numbers (0, 1, 2 only) separated by spaces: ")
arr = list(map(int, user_input.split()))

# Sorting using Dutch National Flag algorithm
sorted_arr = dutch_national_flag_sort(arr)

# Output
print("Sorted array:", sorted_arr)
