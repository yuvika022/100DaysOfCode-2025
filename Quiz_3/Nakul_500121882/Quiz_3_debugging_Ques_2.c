// Buggy version
void sortColors(int nums[], int n)
{
    int left = 0, current = 0, right = n - 1;

    while (current <= right)
    {
        if (nums[current] == 0)
        {
            int temp = nums[left];
            nums[left] = nums[current];
            nums[current] = temp;
            left++;
            current++;
        }
        else if (nums[current] == 1)
        {
            current++;
        }
        else
        {
            int temp = nums[current];
            nums[current] = nums[right];
            nums[right] = temp;
            right--;
            current++;  // ❌ Bug: current should not be incremented here
        }
    }
}

// 1. Bug
// - `current++` after swapping with right is incorrect
//   because the new value at current needs to be rechecked.

// 2. Consider int nums[] = {2, 0, 2, 1, 1, 0};
// Expected output: {0, 0, 1, 1, 2, 2}
// Buggy output may be: {0, 0, 2, 1, 1, 2}

// 3. Incorrect behavior due to skipping check on swapped value

// 4. Corrected version
void sortColors(int nums[], int n)
{
    int left = 0, current = 0, right = n - 1;

    while (current <= right)
    {
        if (nums[current] == 0)
        {
            int temp = nums[left];
            nums[left] = nums[current];
            nums[current] = temp;
            left++;
            current++;
        }
        else if (nums[current] == 1)
        {
            current++;
        }
        else
        {
            int temp = nums[current];
            nums[current] = nums[right];
            nums[right] = temp;
            right--;
            // ✅ Do not increment current here
        }
    }
}
