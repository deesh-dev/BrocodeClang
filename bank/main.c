#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool programOver = false;
    double bankBalance = 0;

    while (!programOver){
        printf("Welcome to the bank\n");
        printf("Select an option:\n\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        int userInput;
        scanf("%d", &userInput);
        
        switch (userInput)
        {
        case 1:
            printf("Your balance is: $%.2lf\n", bankBalance);
            break;
        
        case 2:
            printf("Enter the amount to deposit: $");
            double amountDeposit;
            scanf("%lf", &amountDeposit);
            if (amountDeposit <= 0){
                printf("Invalid amount!\n");
            }
            else{
                bankBalance += amountDeposit;
                printf("Deposited $%.2lf\nAccount balance: $%.2lf\n", amountDeposit, bankBalance);
            }
            break;
            
        case 3:
            printf("Enter the amount to withdraw: $");
            double amountWithdraw;
            scanf("%lf", &amountWithdraw);
            if (amountWithdraw > bankBalance){
                printf("Not enough balance in your account to withdraw $%.2lf!\n", amountWithdraw);
                printf("Account balance: $%.2lf\n", bankBalance);
            }
            else if (amountWithdraw <= 0){
                printf("Invalid amount!\n");
            }
            else {
                bankBalance -= amountWithdraw;
                printf("Withdrawn $%.2lf\n", amountWithdraw);
                printf("Account balance: $%.2lf\n", bankBalance);
            }
            break;
        
        case 4:
            printf("Thanks for using our services!\nHave a great day\n");
            printf("Account balance: $%.2lf\n", bankBalance);
            programOver = true;
            break;
            
        default:
            printf("Not a valid input\n");
            break;
        }
    }

    return 0;
}
