def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]  # The element we want to insert
        j = i - 1
        # Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]  # Shift right
            j -= 1
        arr[j + 1] = key  # Insert key at correct location
    return arr

# Taking user input
user_input = input("Enter the numbers separated by spaces: ")
arr = list(map(int, user_input.split()))

# Sorting
sorted_arr = insertion_sort(arr)

# Output
print("Sorted array:", sorted_arr)
