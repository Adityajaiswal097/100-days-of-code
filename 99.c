#include <stdio.h>
#include <stdlib.h>

int main() {
    int day, month, year;
    char months[][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    char date[20];

    printf("Enter date in format dd/mm/yyyy: ");
    gets(date);  // Use fgets() for safety

    // Extract day, month, year using sscanf
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Validate month range
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    // Print formatted date
    printf("Formatted Date: %02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
