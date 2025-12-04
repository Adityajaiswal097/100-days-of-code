#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i = 0, len;

    printf("Enter your full name: ");
    gets(name);  // Use fgets() for safety

    len = strlen(name);

    printf("Formatted Name: ");

    // Print first initial
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // Print middle initials (if any)
    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i + 1] != '\0') {
            // Check if this is not the last word
            int j = i;
            while (j < len && name[j] != ' ')
                j++;
            if (j < len)  // If not the last word, it's an initial
                printf("%c.", name[i]);
            else {
                // Last word (surname) — print in full
                printf(" ");
                for (int k = i; k < len; k++)
                    printf("%c", name[k]);
            }
        }
    }

    printf("\n");
    return 0;
}
