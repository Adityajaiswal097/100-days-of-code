#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];  // Buffer to store each line

    // Open file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    printf("Contents of info.txt:\n\n");

    // Read each line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
