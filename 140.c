#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    int g;
    scanf("%d", &g);
    p.gender = (enum Gender) g;
    const char *genderNames[] = { "MALE", "FEMALE", "OTHER" };
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", genderNames[p.gender]);

    return 0;
}
