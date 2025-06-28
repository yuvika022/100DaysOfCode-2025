//The reason of using end_point is to overcome the edge case of "  aa bbb cccccc     " ;)
#include <stdio.h>
#include <string.h>


char string[100];
int size;
int count = 0;
int longest_count = 0;
int end_point = 0;

int main(){
    printf("Enter a string (Less than 100 characters) : ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);

    int i = 0;
    for(i = 0; i < size; i++){
        if(string[i] != ' '){
            count++;
        }
        else{
            if(count > longest_count){
                longest_count = count;
                end_point = i;
            }
            count = 0;
        }
    }
    if(count > longest_count){
    longest_count = count;
    end_point = i;
    }

    for(int j = end_point - longest_count; j < size; j++){
        printf("%c", string[j]);
    }
    printf("\n");
}
