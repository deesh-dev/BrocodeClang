#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    srand(time(NULL));

    int min = 1;
    int max = 6; 
    
    int randomNum = (rand() % max) + 1;

    printf("%d\n", randomNum);

    return 0;
}
