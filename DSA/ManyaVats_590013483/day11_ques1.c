#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    char cleanStr[1000];  // Filtered string
    int j = 0;

    // Step 1: Remove non-alphanumeric and convert to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            cleanStr[j++] = tolower(str[i]);
        }
    }
    cleanStr[j] = '\0';  // Null-terminate the cleaned string

    // Step 2: Check if it's a palindrome
    int start = 0;
    int end = j - 1;
    while (start < end) {
        if (cleanStr[start] != cleanStr[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    char input[] = "No 'x' in Nixon";

    if (isPalindrome(input)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
