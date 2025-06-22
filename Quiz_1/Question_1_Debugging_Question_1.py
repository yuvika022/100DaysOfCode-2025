def max_sum_of_subarray(arr):

    current_sum = arr[0]
    max_sum = arr[0]

    for i in range(1, len(arr)):

        if current_sum + arr[i] > arr[i]:
            curr_sum += arr[i]
        else:
            current_sum = arr[i]


        if current_sum > max_sum:
            max_sum = current_sum

    return max_sum

