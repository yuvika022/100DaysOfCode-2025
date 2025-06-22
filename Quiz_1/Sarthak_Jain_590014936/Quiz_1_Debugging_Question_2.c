#include <stdio.h>

/*
Tasks 1: Identify the bug in the above implementation

Bug: The variable `max` is declared but not initialized. Local variables have garbage values if not initialized.
Comparing array value with an garbage variable leads to undefined behavior.

2. What kind of incorrect behavior or result might it produce?

If `max` starts with a garbage value larger than any array element, the condition `arr[i] > max` will never be true.
As a result, `max` contains garbage when returned.

3. Rewrite the corrected version of the function

Fix: Initialize `max` to the first element of the array (arr[0]).
Then compare remaining elements starting from index 1.
*/

// Corrected function to find maximum element in an array
int findMax(int arr[], int n) 
{
    int max = arr[0];  //  Proper initialization with the first element

    for (int i = 1; i < n; i++)  //  Start from second element
    {
        if (arr[i] > max) 
        {
            max = arr[i];  //  Update max when a larger value is found
        }
    }

    return max;
}

