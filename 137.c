#include <stdio.h>
int main() {
    enum Role { ADMIN, USER, GUEST };
    enum Role current = USER;
    if (current == ADMIN) {
        printf("Welcome, Admin! You have full access.\n");
    }
    else if (current == USER) {
        printf("Hello User! You have limited access.\n");
    }
    else if (current == GUEST) {
        printf("Hi Guest! Please log in to access more features.\n");
    }

    return 0;
}
