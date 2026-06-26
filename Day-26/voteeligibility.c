#include <stdio.h>
#include <string.h>
int main() {
    char name[100], country[100], gender[50];
    int age;
    int ch = 1, nos = 1;
    printf("***WELCOME TO VOTER'S ELIGIBILITY SYSTEM***\n");
    printf("This system checks the eligibility of an individual for voting in India.\n");
    printf("Let's begin:\n");
    while (ch == 1) {
        printf("\nEnter details about Individual %d\n", nos);
        printf("Enter name: ");
        scanf(" %[^\n]", name);
        printf("Enter gender: ");
        scanf(" %[^\n]", gender);
        printf("Enter country of origin: ");
        scanf(" %[^\n]", country);
        printf("Enter age(years): ");
        scanf("%d", &age);
        while (age < 0) {
            printf("Age cannot be less than 0. Re-enter age: ");
            scanf("%d", &age);
        }
        printf("\nIndividual %d :-\n", nos);
        printf("Name: %s\n", name);
        printf("Gender: %s\n", gender);
        printf("Country of origin: %s\n", country);
        printf("Age: %d\n", age);
        if (age >= 18 && strcmp(country, "India") == 0)
  printf("Individual is of age and a citizen of India. Hence can vote.\n");
        else if (age < 18)
            printf("Individual is not of age yet. %d years to go, before voting.\n", 18 - age);
        else
            printf("Individual is not a citizen of India, so cannot vote.\n");
        printf("Enter 1 to re-enter next individual, or any other number to exit: ");
        scanf("%d", &ch);
        nos++;
    }
    printf("\n***THE END*\n");
    return 0;
}
