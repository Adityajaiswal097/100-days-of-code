#include <stdio.h>

int main() {
    int n = 50;
    int i, j, stars;

    
    for (i = 1; i <= n; i++) {
        stars = 2 * i - 1; 
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
        stars = 2 * i - 1;
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
