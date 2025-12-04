#include <stdio.h>

int main() {
    int n, i, j;


    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("Diagonal traversal of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}
