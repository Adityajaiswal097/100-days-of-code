#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int x = a;
    int y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("HCF (GCD) of %d and %d is %d\n",
