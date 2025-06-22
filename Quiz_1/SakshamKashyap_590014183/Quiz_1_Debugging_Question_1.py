'''Q.1 A student tries to implement a function that finds the maximum sum of any contiguous subarray within an integer array (Kadane's algorithm). Here's their code:

int maxSubarraySum(int nums[], int n)
{
    int maxSum = nums[0];
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
     currentSum += nums[i];
        if (currentSum > maxSum)
    {
         maxSum = currentSum;
    } 
        else if (currentSum < 0)
    {
        currentSum = 0;
        }
    }
    return maxSum;
}

Tasks:
1. Identify the bug or logical flaw in this code.

solution: the bug is here the currentSum is initialize to zero. here if entire array has negative number currentSum keeps resetting to 0, but the correct maximum subarray sum might be negative

2. Consider cases where the array contains all negative numbers.

solution: The correct maximum subarray sum should be -1. but But current code may return 0 incorrectly.

3. What would the function return for the input: int arr[] = {-3, -2, -1, -4};?

solution: -1

4. Suggest a corrected version of this function that works correctly for all input arrays, including those with all negative elements. 

'''
# correct version of code in python is:

def max_subarray_sum(nums):
    max_sum = nums[0]
    current_sum = nums[0]

    for i in range(1, len(nums)):
        current_sum = max(nums[i], current_sum + nums[i])
        max_sum = max(max_sum, current_sum)

    return max_sum

# Taking user input
if __name__ == "__main__":
    n = int(input("Enter the number of elements in the array: "))
    nums = []

    for i in range(n):
        num = int(input(f"Enter element {i+1}: "))
        nums.append(num)

    result = max_subarray_sum(nums)
    print("Maximum Subarray Sum:", result)
