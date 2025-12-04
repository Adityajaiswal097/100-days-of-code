#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char newText[200];
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    getchar();  
    printf("Enter the text to append: ");
    fgets(newText, sizeof(newText), stdin);
    fputs(newText, fp);

    printf("Text appended successfully.\n");
    fclose(fp);

    return 0;
}
