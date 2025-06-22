def max_element(arr):

    maximum_value = arr[0]


    for i in range(1, len(arr)):
        if arr[i] > maximum_value:
            maximum_value = arr[i]

    return maximum_value