#include <stdio.h>
#include <string.h>

// Function to reverse a portion of a string
void reverse(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int start = 0, end = 0, len;

    printf("Enter a sentence: ");
    gets(str);  // Use fgets() for safety

    len = strlen(str);

    while (end <= len) {
        // When a space or end of string is found, reverse the word
        if (str[end] == ' ' || str[end] == '\0') {
            reverse(str, start, end - 1);
            start = end + 1;  // Move to the start of next word
        }
        end++;
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}
