#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // Flag to track if we're inside a word

    // Get filename from user
    printf("Enter filename to read: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch)) {
            inWord = 0;  // End of a word
        } else if (inWord == 0) {
            inWord = 1;  // Start of a new word
            words++;
        }
    }

    fclose(fp);

    printf("\nFile Statistics:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
