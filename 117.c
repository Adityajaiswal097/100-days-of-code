#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 0 to %d, with one missing): ", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Calculate expected sum of 0 to n
    int totalSum = n * (n + 1) / 2;
    int actualSum = 0;

    // Calculate sum of array elements
    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    int missing = totalSum - actualSum;
    printf("Missing number is: %d\n", missing);

    return 0;
}
