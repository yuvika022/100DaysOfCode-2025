"""Q.2The following function is supposed to return the maximum element in an array:

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


 """

# correct version of code in python is:

My_array = list(map(int,input().strip().split()))

max_element = max(My_array)

print(max_element)