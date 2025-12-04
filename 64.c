#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0};
    int max = 0, mostFrequent = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;  
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFrequent = i;
        }
    }

    printf("The digit that occurs most times is: %d\n", mostFrequent);
    printf("It occurs %d times.\n", max);

    return 0;
}
