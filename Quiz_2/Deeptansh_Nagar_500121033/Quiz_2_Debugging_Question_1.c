// Bug in this code -
//  function returns True when the input string is empty (""), which is not logically correct. // empty string doesnt contain any digits so it should return false
// if len(s) == 0:
//       return True   // incorrect logic // it should return false.

// correct option - A) Empty string should return False since it contains no digits
// correct code - 
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool checkDigits(const char *s) {
    if (s[0] == '\0') {
        return false; // issue fixed ;o
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    const char *test_cases[] = {"123", "", "12a3", "007", "abc"};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++) {
        printf("checkDigits(\"%s\") = %s\n", test_cases[i], checkDigits(test_cases[i]) ? "true" : "false");
    }

    return 0;
}
