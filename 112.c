#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0];      // Initialize with first element
    int currentSum = arr[0];  // Tracks current subarray sum

    for (int i = 1; i < n; i++) {
        // Either extend current subarray or start new one
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        // Update global maximum sum
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum: %d\n", maxSum);
    return 0;
}
