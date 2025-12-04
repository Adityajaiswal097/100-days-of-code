#include <stdio.h>
int main() {
    enum Role { ADMIN, USER, GUEST };
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };
    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
