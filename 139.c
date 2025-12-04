#include <stdio.h>
int main() {
    enum Status { SUCCESS = 10, FAILURE = 20, TIMEOUT = 30 };
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    enum Status current = FAILURE;
    printf("Current status = %d\n", current);

    return 0;
}
