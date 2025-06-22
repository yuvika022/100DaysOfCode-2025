#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = INT_MIN; // use int_min value for maxsum cause if we put 0 all the negative numbers will be ignored 
    int currentSum = 0;

    for (int i = 0; i < n; i++) 
    {
        currentSum += nums[i];

        if (currentSum > maxSum) // this check is before so  neagtive input  is also valid
            maxSum = currentSum;

        if (currentSum < 0) // here we have to use if instead of else if so that this check is done always 
            currentSum = 0;
    }

    return maxSum;
}

