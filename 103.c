#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = 0, leftSum = 0;

    // Step 1: Calculate total sum
    for (i = 0; i < n; i++)
        totalSum += arr[i];

    // Step 2: Find pivot index
    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("Pivot index is: %d\n", i);
            return 0;
        }

        leftSum += arr[i]; // Update left sum for next iteration
    }

    // Step 3: If no pivot found
    printf("No pivot index found. Output: -1\n");
    return 0;
}
