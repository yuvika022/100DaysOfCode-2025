// Buggy version
int binarySearch(int nums[], int n, int target)
{
    int left = 0, right = n;  // ❌ Bug: right should be n - 1

    while (left < right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid;  // ❌ Bug: can cause infinite loop
        else
            right = mid - 1;
    }
    return -1;
}

// 1. Bugs
// - `right = n` is invalid since C arrays are 0-indexed. Use `right = n - 1`.
// - `left = mid` is incorrect when left == mid → leads to infinite loop.

// 2. Consider int nums[] = {1, 3, 5, 7}; target = 7;
// Expected output = 3 (index of 7)
// Buggy version may cause an infinite loop or return wrong result.

// 3. The above function may return incorrect result or loop forever.

// 4. Corrected version
int binarySearch(int nums[], int n, int target)
{
    int left = 0, right = n - 1;  // ✅ Fix: inclusive right

    while (left <= right)  // ✅ Fix: include right
    {
        int mid = (left + right) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;  // ✅ Fix: move past mid
        else
            right = mid - 1;
    }
    return -1;
}
