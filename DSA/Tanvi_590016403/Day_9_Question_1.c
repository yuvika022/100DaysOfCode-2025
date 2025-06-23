#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        while (!isalpha(str[left]) && left < right) left++;
        while (!isalpha(str[right]) && left < right) right--;
        if (tolower(str[left]) != tolower(str[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}

// Function to count vowels and consonants
void countVowelsConsonants(char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

// Function to find the first non-repeating character
char firstNonRepeatingChar(char str[]) {
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            freq[(unsigned char)tolower(str[i])]++;
        }
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && freq[(unsigned char)tolower(str[i])] == 1) {
            return str[i];
        }
    }
    return -1;
}

// Main function
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from input if present
    str[strcspn(str, "\n")] = '\0';

    // 1. Palindrome Check
    if (isPalindrome(str))
        printf("Palindrome: true\n");
    else
        printf("Palindrome: false\n");

    // 2. Count Vowels and Consonants
    int vowels, consonants;
    countVowelsConsonants(str, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);

    // 3. First Non-Repeating Character
    char result = firstNonRepeatingChar(str);
    if (result == -1)
        printf("First Non-Repeating Character: -1\n");
    else
        printf("First Non-Repeating Character: '%c'\n", result);

    return 0;
}
