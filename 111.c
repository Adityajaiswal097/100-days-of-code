#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    // Check for valid k
    if (k > n || k <= 0) {
        printf("Invalid value of k.\n");
        return 0;
    }

    printf("First negative in each window: ");

    // Loop through all windows
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;  // Default 0 if no negative found

        // Check the current window of size k
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;  // Stop at first negative
            }
        }

        printf("%d ", firstNeg);
    }

    printf("\n");
    return 0;
}
