#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];


    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the element to insert: ");
    scanf("%d", &num);


    for(i = n - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i];  
    }

    arr[i + 1] = num; 
    n++;  

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
