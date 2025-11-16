#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age);

int main(void){
    printf("Name: ");
    char name[40];
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Age: ");
    int age;
    scanf("%d", &age);

    for (int i = 0; i < 3; i++) happyBirthday(name, age);

    return 0;
}

void happyBirthday(char name[], int age){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!",name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
}