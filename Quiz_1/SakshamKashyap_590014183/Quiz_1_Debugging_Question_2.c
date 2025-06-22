/*Q.2The following function is supposed to return the maximum element in an array:

int findMax(int arr[], int n)
{
     int max;
     for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
             max = arr[i];
        }
     }
    return max;
}

Tasks:
1. Identify the bug in the above implementation

solution : Here, the bug in max we have not initialized the max. it should be max = arr[0] (first element of array) and i should be equal to 1 (i =1).

2. What kind of incorrect behavior or result might it produce?

solution: Since max is not initialized, its value is undefine means garbage value.

3. Rewrite the corrected version of the function


 */

// correct version of code in python is:

// Function to find the maximum subarray sum
int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) {
        // Choose the maximum between current element and sum including current element
        if (currentSum + nums[i] > nums[i])
            currentSum = currentSum + nums[i];
        else
            currentSum = nums[i];

        // Update maxSum if currentSum is greater
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    return maxSum;
}

int main() {
    // Sample input array
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    // Function call
    int result = maxSubarraySum(nums, n);

    // Print the result
    printf("Maximum Subarray Sum is: %d\n", result);

    return 0;
}