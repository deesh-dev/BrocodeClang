#include <stdio.h>

int main(void){
    printf("Temperature Conversion Program\n");
    printf("C. Celcius to Fahrenheit\n");
    printf("F. Fahrenheit to Celcius\n");
    printf("Enter unit (C or F): ");
    char unit;
    double tempC;
    double tempF;
    scanf("%c", &unit);

    if (unit == 'C'){
        printf("Enter the temperature in °C: ");
        scanf("%lf", &tempC);
        printf("%.1lf°C = %.1lf°F\n", tempC, 1.8 * tempC + 32);
    }
    else {
        if (unit == 'F'){
            printf("Enter the temperature in °F: ");
            scanf("%lf", &tempF);
            printf("%.1lf°F = %.1lf°C\n", tempF, (tempF - 32) / 1.8);
        }
        else printf("Not a valid unit\nTerminatingProgram\n");
    }

    return 0;
}