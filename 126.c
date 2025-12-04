#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }
    printf("\n--- File Content ---\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
