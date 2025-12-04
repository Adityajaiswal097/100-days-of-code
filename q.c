#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;


    printf("Enter a string: ");
    gets(str); 


    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
