#include <stdio.h>

int arr[100];
int num;
int size;

int main()
{
    printf("Enter the size of the array (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements of the array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number : ");
    scanf("%d", &num);

    int length = size;
    int j = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] != num){
            arr[j] = arr[i];
            j++;
        }
        else{
            length--;
        }
    }
    size = length;
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
