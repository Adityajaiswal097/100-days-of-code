#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);  // Use fgets() instead for safety

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if character is not a vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j] = ch;  // Keep non-vowel characters
            j++;
        }
        i++;
    }

    result[j] = '\0';  // End the new string

    printf("String after removing vowels:\n%s\n", result);

    return 0;
}
