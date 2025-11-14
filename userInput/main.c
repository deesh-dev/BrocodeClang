#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    float gpa;
    char grade;
    char name[30];

    printf("Enter your Age: ");
    scanf("%i", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your Grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);

    return 0;
}
