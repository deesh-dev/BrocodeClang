#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int min = 1;
    int max = 100;

    int num = (rand() % max ) + 1;

    int guess;
    int tries = 0;
    
    do
    {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);
        if (guess > num){
            printf("Too HIGH!\n");
        }
        else if (guess < num){
            printf("Too LOW!\n");
        } 
        else {
            tries++;
            break;
        }
        tries++;
    } while (guess != num);
    
    if (tries == 1){
        printf("You found it in %d try! The number was %d!\n", tries, num);
    }
    else{
        printf("You found it in %d tries! The number was %d!\n", tries, num);
    }
    
    return 0;
}