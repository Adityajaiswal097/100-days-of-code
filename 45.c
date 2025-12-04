#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    gets(str);  // Use fgets() instead for safety

    while (str[i] != '\0') {
        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase (ASCII difference)
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
