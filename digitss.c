#include <stdio.h>

int main() {
    int num, digit;
    unsigned long long product = 1;
    int hasOdd = 0; 

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num; 

    
    while (temp != 0) {
        digit = temp % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits of %d is %llu\n", num, product);
    } else {
        printf("There are no odd digits in %d\n", num);
    }

    return 0;
}

