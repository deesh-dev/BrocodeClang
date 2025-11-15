#include <stdio.h>
#include <math.h>

int main(void){

    printf("Compound interest calculator\n");

    printf("Enter the principal (P): ");
    double principal;
    scanf("%lf", &principal);

    printf("Enter the interest rate (r): ");
    double rate;
    scanf("%lf", &rate);
    rate /= 100;

    printf("Enter the number of years (t): ");
    int years;
    scanf("%d", &years);

    printf("Enter number of times compounder per year (n): ");
    int timesCompounded;
    scanf("%d", &timesCompounded);

    double total = principal * pow((1 + rate / timesCompounded), timesCompounded * years);

    printf("After %d years, the total will be $%.2lf\n", years, total);

    return 0;


}