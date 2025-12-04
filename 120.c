#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
    int capitalize = 1;  // Flag to capitalize next alphabet

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    for (i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        // If current character ends a sentence, next should be capitalized
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            capitalize = 1;
    }

    printf("Sentence case: %s", str);
    return 0;
}
