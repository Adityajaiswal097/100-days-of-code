#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, sum = 0, digit;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorials of digits
    while(temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Check if strong number
    if(sum == num) {
        printf("

