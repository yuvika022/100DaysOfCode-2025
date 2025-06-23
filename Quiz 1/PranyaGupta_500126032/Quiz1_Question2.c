#include<stdio.h>;
//1. The bug in the program is that max is not defined initiially as 0 or any value, and we are comparing it in the if loop this will cause an error
//2. by not defining any value for 'max' it will take some garbage value and the condition in if loop mght be never true
//3. Corrected code
int findMax(int arr[], int n){
    int max;
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
int arr[] = {1,3,4,6,9};
int n = sizeof(arr)/sizeof(arr[0]);
printf(findMax(arr, n));
}
