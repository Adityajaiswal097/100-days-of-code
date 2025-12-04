#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous Greater Elements: ");

    // For each element, find its previous greater element
    for (int i = 0; i < n; i++) {
        int prev = -1; // Default value if no greater element found on left

        // Search to the left for the first greater element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break; // Found nearest greater element on left
            }
        }

        // Print results in comma-separated format
        printf("%d", prev);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
