//Question1  answer - A) Empty string should return False since it contains no digits

#include <stdio.h>
#include <stdbool.h>

// Function to check if the string contains only digits
bool is_digits_only(const char *s) {
    if (s[0] == '\0') {
        return false;  //  Empty string is NOT considered to contain digits
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }
    return true;
}

// Main method to call the function
int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    bool result = is_digits_only(str);
    
    if (result) {
        printf("The input contains only digits.\n");
    } else {
        printf("The input does NOT contain only digits.\n");
    }

    return 0;
}
