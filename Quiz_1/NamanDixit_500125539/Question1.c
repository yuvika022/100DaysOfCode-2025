#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int nums[], int n) 
{
    // Handle empty array
    if (n == 0) {
        return 0; // Or handle as per problem requirements
    }
    
    int maxSum = nums[0]; // Initialize to first element
    int currentSum = nums[0]; // Start with first element

    for (int i = 1; i < n; i++) 
    {
        // Either extend the existing subarray or start a new one
        currentSum = (currentSum + nums[i] > nums[i]) ? currentSum + nums[i] : nums[i];
        // Update maxSum if currentSum is larger
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }
    
    return maxSum;
}

int main() 
{
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    
    // Optional: Validate input to ensure n is non-negative
    if (n < 0) {
        printf("Invalid array size\n");
        return 1;
    }
    
    int nums[n];
    printf("Enter elements of array: ");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int a = maxSubarraySum(nums, n);
    printf("Maximum subarray sum: %d\n", a);

    return 0;
}
