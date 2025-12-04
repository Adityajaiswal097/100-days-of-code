#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    gets(str);  // Use fgets() for safety

    len = strlen(str);

    printf("All substrings of the string are:\n");

    // Outer loop for starting point
    for (i = 0; i < len; i++) {
        // Inner loop for ending point
        for (j = i; j < len; j++) {
            // Print substring from str[i] to str[j]
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
