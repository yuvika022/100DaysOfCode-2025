#include<stdio.h>


void question_1(int [],int);
void question_2(int [],int );
void question_3(int [],int );




int main()
{
    int arr[6] = {2,-11,6,-4,1,-2}; // Array for question 1
    // int arr[6] = {2,5,6,3,1,2}; // Arrat for question 2

    // can use any array for question 3

    int length = sizeof(arr)/sizeof(arr[0]);

    
    
    // question_1(arr,length);
    
    // question_2(arr,length);
    
    question_3(arr,length);
    
    
    
    
    return 0;
}



// Qusetion 1
void question_1(int arr[],int length){
    
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    
    printf("Updated array: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}

// Question 2
void question_2(int arr[],int length){
    
    int count = 0;
    int missing_number, occur_twice;

    for (int i = 1; i < length; i++)
    {
        count = 0;
        for (int j = 0; j < length; j++)
        {
            if (i == arr[j])
            {
                count++;
                
            }
        }
        
        if (count == 0)
        {
            missing_number = i;
        }
        else if (count == 2)
        {
            occur_twice = i;
        }
    }
    
    printf("Missing: %d, Twice: %d",missing_number,occur_twice);
}

// Question 3
void question_3(int arr[],int length){
    int sum = 0;
    
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    
    printf("%d",sum);
}