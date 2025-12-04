#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    // Check if file was created successfully
    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // safer than gets()
    
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
