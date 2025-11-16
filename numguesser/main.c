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
    printf("The number is: %d\n", num);
    
    do
    {
        printf("Guess the number: ");
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
        printf("You found it! The number was %d in %d try!\n", num, tries);
    }
    else{
        printf("You found it! The number was %d in %d tries!\n", num, tries);
    }
    
    return 0;
}