#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main() 
{
    int arr[100]; 
    int n; 
    printf("Kitne numbers daaloge: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) 
    {
        printf("Galat size! 1 se 100 tak daalo.\n");
        return 1;
    }
    printf("Numbers daalo: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
