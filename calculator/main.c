#include <stdio.h>

int main(void){
    char expression[50];
    printf("Enter your expression: ");
    double num1;
    double num2;
    char op;

    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        printf("%.4lf + %.4lf = %.4lf\n", num1, num2, num1 + num2);
        break;
    
    case '-':
        printf("%.4lf - %.4lf = %.4lf\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%.4lf / %.4lf = %.4lf\n", num1, num2, num1 / num2);
        break;
    
    case '/':
        printf("%.4lf * %.4lf = %.4lf\n", num1, num2, num1 * num2);
        break;
        
    default:
        printf("%c is not a valid operation\n", op);
    }
    return 0;
}