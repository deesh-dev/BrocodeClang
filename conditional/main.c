#include <stdio.h>

int main(void){
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    if (age >= 18) printf("You are an adult\n");
     
    else printf("You're not an adult yet\n");
    

    return 0;
}