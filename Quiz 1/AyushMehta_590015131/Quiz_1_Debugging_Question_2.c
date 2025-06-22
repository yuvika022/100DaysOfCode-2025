// The following function is supposed to return the maximum element in an array:  

int findMax(int arr[], int n) 
{
    int max=arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}




  /*Tasks:
1.⁠ ⁠Identify the bug in the above implementation 
ANS- max is only intialized it means it holds garbage value so it will cause problem ahead

2.⁠ ⁠What kind of incorrect behavior or result might it produce? 
 ANS- we will get random maximum value which is not even present in the  array    
 start from int i=1 cause we already placed max=arr[0]   to avoid unneceesary check           */
