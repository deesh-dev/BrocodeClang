#include <stdio.h>
#include <string.h>

int main(void){
    
    char currency = '$';

    printf("What item would you like to buy?: ");
    char item[50];
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What's the price for each?: ");
    float price;
    scanf("%f", &price);

    printf("How many would you like?: ");
    int quanitity;
    scanf("%i", &quanitity);

    float total = price * quanitity;

    if (quanitity == 1) printf("You have bought %i %s\n", quanitity, item);
    else printf("You have bought %i %ss\n", quanitity, item);
    printf("Total: $%.2f\n", total);

    return 0;
}