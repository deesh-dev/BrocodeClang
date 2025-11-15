#include <stdio.h>

int main(void){
    printf("Weight conversion calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice(1 or 2): ");
    int userChoice;
    scanf("%i", &userChoice);

    double weightKg;
    double weightPound;
    

    if (userChoice == 1){
        printf("Enter the weight in Kilograms: ");
        scanf("%lf", &weightKg);
        printf("%.2lf Kilograms = %.2lf Pounds\n", weightKg, weightKg * 2.2);
    }
    else{
        if (userChoice == 2){
            printf("Enter the weight in Pounds: ");
            scanf("%lf", &weightPound);
            printf("%.2lf Pounds = %.2lf Pounds\n", weightPound, weightPound/2.2);
        }
        else{
            printf("Not a valid unit!\n");
            printf("Terminating\n");
        }
    }

    return 0;
}
