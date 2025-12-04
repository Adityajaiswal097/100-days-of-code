#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a lowercase string: ");
    gets(str);  // or use fgets(str, 100, stdin)

    // Convert to uppercase manually
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        }
        i++;
    }

    // Display result
    printf("Uppercase string: %s\n", str);

    return 0;
}
