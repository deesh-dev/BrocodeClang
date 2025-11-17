#include <stdio.h>

int main(void){

    //Array of strings is basically a two dimensional array of characters.

    char fruits[][10] = {"Apple", "Banana", "Mango"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    for (int i = 0; i < size; i++){
        printf("%s\n", fruits[i]);
    }
    return 0;
}