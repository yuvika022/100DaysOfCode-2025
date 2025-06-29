#include <stdio.h>
#include <stdbool.h>

bool is_digits_only(char *s) {
    if (s[0] == '\0') {
        return false; // Empty string should return false because it does not have number
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false; 
        }
    }
    return true; 
}

int main() {
    char a[] = "12345";
    char b[] = "";
    char c[] = "12a45";
    printf("for a -> %s\n", a, is_digits_only(a) ? "True" : "False");
    printf("for b -> %s\n", b, is_digits_only(b) ? "True" : "False");
    printf("for c -> %s\n", c, is_digits_only(c) ? "True" : "False");
    return 0;
}
