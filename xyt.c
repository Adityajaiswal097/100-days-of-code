#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};  // to store frequency of letters
    int i;

    // Input two strings
    printf("Enter first string: ");
    gets(str1);  // or use fgets(str1, 100, stdin)

    printf("Enter second string: ");
    gets(str2);  // or use fgets(str2, 100, stdin)

    // If lengths differ, not anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Count frequency of each character in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            count[str1[i] - 'A']++;
    }

    // Subtract frequency using str2
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count[str2[i] - 'a']--;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            count[str2[i] - 'A']--;
    }

    // Check if all counts are zero
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}
