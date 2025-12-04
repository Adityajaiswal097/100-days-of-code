#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin)

    // Find length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Display result
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
