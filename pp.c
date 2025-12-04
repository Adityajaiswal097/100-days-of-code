#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // to store frequency of each lowercase letter
    int i, found = 0;

    // Input string
    printf("Enter a string (lowercase letters only): ");
    gets(str);  // or use fgets(str, 200, stdin)

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {  // found repeating character
                printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
        }
    }

    // If no repetition found
    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
