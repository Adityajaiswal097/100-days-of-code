#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin)

    // Traverse each character
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is an alphabet
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

            // Check for vowels
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Display result
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
