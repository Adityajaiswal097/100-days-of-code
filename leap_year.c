#include <stdio.h>
int main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year condition:
    // divisible by 400 OR (divisible by 4 AND not divisible by 100)
    printf("%d is %s leap year.\n", year,
           (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? "a" : "not a");
return 0;
}
