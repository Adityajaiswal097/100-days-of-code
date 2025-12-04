#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open students.txt for writing.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    printf("\nRecords saved to students.txt\n\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open students.txt for reading.\n");
        return 1;
    }

    printf("Reading records from file:\n");
    printf("-----------------------------------\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
