#include <stdio.h>

int main() {
    int n, i, j, k, isDistinct = 1;


    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int diagonal[n]; 

    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct)
            break;
    }

    
    if(isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}

