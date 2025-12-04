#include <stdio.h>

int main() {
    char str[200];
    int i;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 200, stdin)

    // Toggle case
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // convert lowercase → uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // convert uppercase → lowercase
    }

    // Display result
    printf("Toggled string: %s\n", str);

    return 0;
}
