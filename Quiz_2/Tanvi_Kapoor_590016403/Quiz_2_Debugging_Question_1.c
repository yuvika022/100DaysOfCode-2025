#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Correct logic: Option A (fix for empty string)
bool is_digits_only_A(const char *s) {
    if (strlen(s) == 0) return false; // Fix: empty string should return false
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') return false;
    }
    return true;
}

// Option B: Using index-based loop (but logic is same as original, not a bug)
bool is_digits_only_B(const char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') return false;
    }
    return strlen(s) > 0;
}

// Option C: Using ASCII explicitly (same result, not a bug)
bool is_digits_only_C(const char *s) {
    if (strlen(s) == 0) return false;
    for (int i = 0; s[i] != '\0'; i++) {
        int ascii = (int)s[i];
        if (ascii < 48 || ascii > 57) return false;
    }
    return true;
}

// Option D: Handling negative numbers (extra feature, not part of original logic)
bool is_digits_only_D(const char *s) {
    if (strlen(s) == 0) return false;
    int i = 0;
    if (s[0] == '-') i++; // Skip leading minus sign
    for (; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') return false;
    }
    return i > (s[0] == '-' ? 1 : 0); // Ensure at least one digit
}

int main() {
    char *inputs[] = {"12345", "", "12a34", "-123", "000", "-"};
    int n = sizeof(inputs)/sizeof(inputs[0]);

    printf("=== Option A: Fix for empty string ===\n");
    for (int i = 0; i < n; i++) {
        printf("Input: '%s' -> %s\n", inputs[i], is_digits_only_A(inputs[i]) ? "True" : "False");
    }

    printf("\n=== Option B: Index-based loop ===\n");
    for (int i = 0; i < n; i++) {
        printf("Input: '%s' -> %s\n", inputs[i], is_digits_only_B(inputs[i]) ? "True" : "False");
    }

    printf("\n=== Option C: ASCII comparison ===\n");
    for (int i = 0; i < n; i++) {
        printf("Input: '%s' -> %s\n", inputs[i], is_digits_only_C(inputs[i]) ? "True" : "False");
    }

    printf("\n=== Option D: Support negative numbers ===\n");
    for (int i = 0; i < n; i++) {
        printf("Input: '%s' -> %s\n", inputs[i], is_digits_only_D(inputs[i]) ? "True" : "False");
    }

    return 0;
}
