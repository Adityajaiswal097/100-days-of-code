#include <stdio.h>
int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status result = TIMEOUT;
    if (result == SUCCESS) {
        printf("Operation completed successfully.\n");
    }
    else if (result == FAILURE) {
        printf("Operation failed.\n");
    }
    else if (result == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    return 0;
}
