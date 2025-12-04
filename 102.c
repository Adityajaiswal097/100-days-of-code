#include <stdio.h>

int main() {
    int n, x, i, result = -1;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Binary search for ceil
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;   // potential ceil
            high = mid - 1; // look for smaller index
        } else {
            low = mid + 1;  // move right
        }
    }

    if (result == -1)
        printf("Ceil does not exist. Output: -1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[result], result);

    return 0;
}
