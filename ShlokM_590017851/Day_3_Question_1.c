#include <stdio.h>
#define MAX 10000  // Assumption: array values will be in the range -10000 to 10000
int main() 
{
    int nums[] = {2, 3, 4, 3, 5, 2, 3}; 
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;  

    int freq[2 * MAX + 1] = {0};  
    for (int i = 0; i < n; i++)
      {
        freq[nums[i] + MAX]++;
    }
    int sum = 0;
    for (int i = 0; i < 2 * MAX + 1; i++) 
    {
        if (freq[i] == k) 
        {
            sum += (i - MAX);  
        }
    }
    printf("Sum of elements that appear exactly %d times: %d\n", k, sum);
    return 0;
}
