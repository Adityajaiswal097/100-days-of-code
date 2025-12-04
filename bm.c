#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, temp;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin)

    // Find length of string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string in-place
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Display reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
