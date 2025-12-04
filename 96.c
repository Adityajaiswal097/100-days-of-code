#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter your full name: ");
    gets(name);  // Use fgets() for safety

    printf("Initials: ");

    // Print the first letter of the name
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Traverse through the name
    for (i = 1; name[i] != '\0'; i++) {
        // Print character after every space (if it's not another space)
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c", name[i]);
    }

    printf("\n");
    return 0;
}
