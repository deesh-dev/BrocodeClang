#include <stdio.h>

int main(void){
    printf("Enter the day of the week (1 - 7): ");
    int dayOfWeek;
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 1:
        printf("It's monday\n");
        break;
    
    case 2:
        printf("It's tuesday\n");
        break;

    case 3:
        printf("It's wednesay\n");
        break;
    
    case 4:
        printf("It's thursday\n");
        break;
    
    case 5:
        printf("It's friday\n");
        break;
    
    case 6:
        printf("It's saturday\n");
        break;

    case 7:
        printf("It's sunday\n");
        break;
    
    default:
        printf("%d is not a valid day in a week!!\n", dayOfWeek);
        break;
    }

    return 0;
}