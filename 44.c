#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    gets(str);  // You can use fgets() for safety

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if alphabet
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert to lowercase for simplicity
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
