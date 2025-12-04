#include <stdio.h>

int main() {
    int n, target, i, first = -1, last = -1;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    // Print result
    if (first == -1)
        printf("Target not found. Output: -1, -1\n");
    else
        printf("First occurrence: %d (index %d)\nLast occurrence: %d (index %d)\n", 
                nums[first], first, nums[last], last);

    return 0;
}
