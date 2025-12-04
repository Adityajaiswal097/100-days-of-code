#include <stdio.h>
#include <stdlib.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee emp[3]; 
    int i;
    FILE *fp;
    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Joining Date (day month year): ");
        scanf("%d %d %d", &emp[i].joining_date.day, &emp[i].joining_date.month, &emp[i].joining_date.year);

        printf("\n");
    }

    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    fwrite(emp, sizeof(struct Employee), 3, fp);
    fclose(fp);
    printf("Employee data written to employees.dat successfully.\n\n");
    struct Employee read_emp[3];

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    fread(read_emp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("Employee Data Read from File:\n");
    printf("-----------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", read_emp[i].name);
        printf("Employee ID: %d\n", read_emp[i].emp_id);
        printf("Salary: %.2f\n", read_emp[i].salary);
        printf("Joining Date: %02d-%02d-%04d\n", 
               read_emp[i].joining_date.day,
               read_emp[i].joining_date.month,
               read_emp[i].joining_date.year);
        printf("-----------------------------\n");
    }

    return 0;
}
