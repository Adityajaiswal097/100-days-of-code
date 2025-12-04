#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 200, stdin)

    // Remove vowels
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            continue; // skip vowels
        } else {
            result[j++] = ch; // keep non-vowel characters
        }
    }

    result[j] = '\0'; // null-terminate the new string

    // Display result
    printf("String without vowels: %s\n", result);

    return 0;
}
