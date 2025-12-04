#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements: ");

    // For each element, find its next greater element
    for (int i = 0; i < n; i++) {
        int next = -1; // Default value if no greater element is found

        // Search for next greater element to the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break; // Stop at the first greater element
            }
        }

        // Print the result in comma-separated format
        printf("%d", next);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
