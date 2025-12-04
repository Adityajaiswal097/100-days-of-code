#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    // Brute force: Check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    // If no solution found
    printf("-1 -1\n");
    return 0;
}
