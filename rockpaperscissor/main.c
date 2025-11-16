#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void choicePrinter(int choice1, int choice2);
int resultcomparer(int choice1, int choice2);

int main(void){
    bool gameOver = false;
    int numComputerWon = 0;
    int numUserWon = 0;

    printf("*** ROCK PAPER SCISSORS ***\n");
    printf("Choose an option\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSORS\n");

    while (!gameOver){
        srand(time(NULL));
        int computerChoice = (rand() % 3) + 1;
        printf("Enter your choice: ");
        int userChoice;
        scanf("%d", &userChoice);

        int winner = resultcomparer(computerChoice, userChoice);
        choicePrinter(computerChoice, userChoice);

        if (winner == 0) printf("It's a draw!\n");
        else if (winner == 1){
            printf("Computer WON!\n");
            numComputerWon++;
        } 
        else {
            printf("You WON!\n");
            numUserWon++;
        }

        printf("Again? :");
        char continueGame;
        scanf(" %c", &continueGame);
        if (continueGame == 'n'){
            printf("Thanks for playing the ROCK PAPER SCISSOR game!\n");
            printf("Computer's score: %d\n", numComputerWon);
            printf("Your score: %d\n", numUserWon);
            
            gameOver = true;
        }
    }
    return 0;
}

void choicePrinter(int choice1, int choice2){

    switch(choice1){
        case 1:
            printf("Computer chose ROCK\n");
            break;
        
        case 2:
            printf("Computer chose PAPER\n");
            break;

        case 3:
            printf("Computer chose SCISSORS\n");
            break;
        
        default:
            printf("That's not a valid choice\nTerminating!\n");
            break;
    }
    switch(choice2){
        case 1:
            printf("You chose ROCK\n");
            break;
        
        case 2:
            printf("You chose PAPER\n");
            break;

        case 3:
            printf("You chose SCISSORS\n");
            break;
        
        default:
            printf("That's not a valid choice\nTerminating!\n");
            break;
    }   
}
int resultcomparer(int choice1, int choice2){
    
    if (choice1 == choice2) return 0;
    else if (choice1 == 1 && choice2 == 2) return 2;
    else if (choice1 == 1 && choice2 == 3) return 1;
    else if (choice1 == 2 && choice2 == 1) return 1;
    else if (choice1 == 2 && choice2 == 3) return 2;
    else if (choice1 == 3 && choice2 == 1) return 2;
    else if (choice1 == 3 && choice2 == 2) return 1;
}