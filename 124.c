#include <stdio.h>

int main() {
    FILE *source, *dest;
    char sourceFile[100], destFile[100];
    char ch;

    // Get filenames from user
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error! Could not open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error! Could not create destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from %s to %s\n", sourceFile, destFile);

    // Close both files
    fclose(source);
    fclose(dest);

    return 0;
}
