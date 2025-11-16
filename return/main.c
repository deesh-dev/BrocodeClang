#include <stdio.h>

int square(int num);

int main(void){
    printf("Enter the number you want squared: ");
    int num;
    scanf("%d", &num);

    printf("The square of %d is %d\n", num, square(num));

    return 0;
}

int square(int num){
    return num * num;
}
