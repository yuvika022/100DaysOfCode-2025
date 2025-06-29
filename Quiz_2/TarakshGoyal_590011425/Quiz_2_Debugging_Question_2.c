#include <stdio.h>

int first_non_repeating(char *s) {
    int count[1000] = {0}; 

    for (int i = 0; s[i] != '\0'; i++) {
        count[(int)s[i]]++;
    }

    for (int i = 0; s[i] != '\0'; i++) {//HERE WAS THE ERROR //char_count holds unique characters this may loose the original sequence.
        if (count[(int)s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    char str1[] = "abac";
    char str2[] = "aabbcc";
    char str3[] = "teeter";

    printf("str1 -> %d\n", str1, first_non_repeating(str1)); 
    printf("str2 -> %d\n", str2, first_non_repeating(str2)); 
    printf("str3 -> %d\n", str3, first_non_repeating(str3));
    return 0;
}
