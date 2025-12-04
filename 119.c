#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 1 to n-1 with one repeated): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Using mathematical formula
    // Sum of 1 to n-1 = (n-1)*n/2
    int expectedSum = (n - 1) * n / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    int repeated = actualSum - expectedSum;
    printf("Repeated element is: %d\n", repeated);

    return 0;
}
