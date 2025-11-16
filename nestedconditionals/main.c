#include <stdio.h>
#include <stdbool.h>

int main (void){

    bool isStudent;
    bool isSenior;
    float price = 10.00f;

    printf("Are you a student: ");
    char isStudentChar;
    scanf("%c", &isStudentChar);
    if (isStudentChar == 'y') isStudent = true;
    else isStudent = false;

    getchar();
    printf("Are you a senior: ");
    char isSeniorChar;
    scanf("%c", &isSeniorChar);
    if (isSeniorChar == 'y') isSenior = true;
    else isSenior = false;

    double discount;

    if(isStudent && isSenior){
        discount = 0.3;
        printf("You get a student discount of 10%%\n");
        printf("You get a senior discount of 20%%\n");
    } 
    else if (!isStudent && isSenior){
        discount = 0.2;
        printf("You get a senior discount of 20%%\n");
    }
    else if (isStudent && !isSenior){
        discount = 0.1;
        printf("You get a student discount of 10%%\n");
    }
    else discount = 0;
    

    double discountValue = discount * price;
    double amount = price - discountValue;

    printf("The price of ticket is $%.2f\n",amount);

    return 0;

}