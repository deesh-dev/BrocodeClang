#include <stdio.h>

int main(void){
    char expression[50];
    printf("Enter your expression: ");
    double num1;
    double num2;
    char op;

    scanf("%lf %c %lf", &num1, &op, &num2);

    if (op == '+') printf("%.4lf + %.4lf = %.4lf\n", num1, num2, num1 + num2);
    else if (op == '-') printf("%.4lf - %.4lf = %.4lf\n", num1, num2, num1 - num2);
    else if (op == '/') printf("%.4lf / %.4lf = %.4lf\n", num1, num2, num1 / num2);
    else if (op == '*') printf("%.4lf * %.4lf = %.4lf\n", num1, num2, num1 * num2);

    return 0;
}