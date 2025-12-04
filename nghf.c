 #include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;


    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    lastDigit = num % 10;
    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits);

    
    swappedNum = num % (int)pow(10, digits); 
    swappedNum = swappedNum / 10;          


    swappedNum = lastDigit * (int)pow(10, digits) + swappedNum * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
        

    
