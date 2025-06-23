#include <stdio.h>

// 1. The bug in the original program is that currentSum was reset to 0 incorrectly,
//    and it didn't work for arrays with all negative numbers.
// 2. By initializing currentSum and maxSum properly, we can handle all cases correctly.
// 3. Corrected code below:

int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];      
    int currentSum = nums[0];  

    for (int i = 1; i < n; i++) {
        if (currentSum + nums[i] > nums[i]) {
            currentSum = currentSum + nums[i];
        } else {
            currentSum = nums[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", maxSubarraySum(arr, n));
    return 0;
}
