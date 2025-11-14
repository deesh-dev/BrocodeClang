#include <stdio.h>
#include <stdbool.h>

int main(void){
    int age = 25;
    int year = 2025;
    int quantitiy = 1;
    printf("You are %i years old\n", age);
        printf("The year is %i\n", year);
        printf("You have ordered %i x items\n", quantitiy);


    float gpa = 2.5f;
    float price = 19.99f;
    float temp = -10.1f;

    printf("Your gpa is %f\n", gpa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.2f°F\n", temp);

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi); 
    printf("The value of e is %.15lf\n", e);

    char grade = 'A';
    char name[] = "Deepak Shah";
    char food[] = "Pizza";
    char email[] = "fakemail123@gmail.com";

    printf("Your grade is %c\n", grade);
    printf("Hello, my name is %s\n", name);
    printf("Is your favourite %s by any chance? We're ordering food for dinner\n", food);
    printf("Hey, I received a mail from %s today, is it yours?\n", email);


    bool isOnline = true;


    return 0;
}