#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    // Check if k is valid
    if (k > n || k <= 0) {
        printf("Invalid value of k.\n");
        return 0;
    }

    int currentSum = 0;

    // Step 1: Compute sum of first window of size k
    for (int i = 0; i < k; i++)
        currentSum += arr[i];

    int maxSum = currentSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    // Step 3: Print the result
    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
