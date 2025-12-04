#include <stdio.h>

// Function to sort the array (Bubble Sort)
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    // Sort the array
    sortArray(arr, n);

    // Check if k is valid
    if (k > 0 && k <= n)
        printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    else
        printf("Invalid input! k should be between 1 and %d\n", n);

    return 0;
}
