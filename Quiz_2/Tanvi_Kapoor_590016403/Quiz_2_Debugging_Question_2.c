#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

/*
---------------------------------------------------
 PART 1: Buggy Version - Mimics Python Mistake
 - The student counts characters correctly
 - But incorrectly finds first non-repeating by checking frequency array
 - Loses the original order of appearance
---------------------------------------------------
*/
int first_non_repeating_bug(const char *s) {
    int freq[ASCII_SIZE] = {0};

    // Count frequency of each character
    for (int i = 0; s[i] != '\0'; i++) {
        freq[(unsigned char)s[i]]++;
    }

    // Bug: Incorrectly tries to find first non-repeating char via freq table
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (freq[i] == 1) {
            char ch = (char)i;
            // Now searches string for first occurrence of this char
            for (int j = 0; s[j] != '\0'; j++) {
                if (s[j] == ch)
                    return j;  // ❌ May return wrong index if order not preserved
            }
        }
    }

    return -1; // No non-repeating character found
}

/*
---------------------------------------------------
 PART 2: Explanation of Bug
 - Frequencies are stored in an unordered array
 - Iterating over frequency array does NOT preserve character order
 - Example: "geeksforgeeks" → correct answer is 'f', but buggy version may return 'e'
---------------------------------------------------
*/

/*
---------------------------------------------------
 PART 3: Correct Version
 - Count frequencies
 - Then scan string left to right to find first char with count 1
---------------------------------------------------
*/
int first_non_repeating_correct(const char *s) {
    int freq[ASCII_SIZE] = {0};

    // Step 1: Count frequency
    for (int i = 0; s[i] != '\0'; i++) {
        freq[(unsigned char)s[i]]++;
    }

    // Step 2: Traverse original string in order
    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[(unsigned char)s[i]] == 1)
            return i; // ✅ Return first non-repeating character index
    }

    return -1;
}

/*
---------------------------------------------------
 PART 4: Main function with test cases
---------------------------------------------------
*/
int main() {
    const char *test_cases[] = {
        "aabbccdde",      // Expected: 'e' at index 8
        "geeksforgeeks",  // Expected: 'f' at index 5
        "aabb",           // Expected: none → -1
        "abcabcde",       // Expected: 'd' at index 6
        "",               // Empty string → -1
        "z"               // Single character → index 0
    };

    int n = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("=== First Non-Repeating Character Test ===\n");

    for (int i = 0; i < n; i++) {
        const char *s = test_cases[i];
        int bug_idx = first_non_repeating_bug(s);
        int correct_idx = first_non_repeating_correct(s);

        printf("\nInput: \"%s\"\n", s);
        
        if (bug_idx != -1)
            printf("Buggy Version  : Index %d, Character '%c'\n", bug_idx, s[bug_idx]);
        else
            printf("Buggy Version  : No non-repeating character found\n");

        if (correct_idx != -1)
            printf("Correct Version: Index %d, Character '%c'\n", correct_idx, s[correct_idx]);
        else
            printf("Correct Version: No non-repeating character found\n");
    }

    return 0;
}
