#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    // Check every possible substring (brute-force approach)
    for (int i = 0; i < n; i++) {
        int visited[256] = {0}; // ASCII character tracker
        int len = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]]) // character already seen
                break;
            visited[(unsigned char)s[j]] = 1;
            len++;
        }

        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
