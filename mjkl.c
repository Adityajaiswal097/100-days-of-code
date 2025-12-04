#include <stdio.h>

int hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, lcmValue;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    
    lcmValue = (a * b) / hcf(a, b);

    printf("LCM of %d and %d is %d\n", a, b, lcmValue);

    return 0;
}
