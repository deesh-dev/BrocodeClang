#include <stdio.h>
#include <string.h>

int main(void){
    printf("Enter an adjective (description): ");
    char adjective1[30];
    scanf("%s", adjective1);

    getchar();                                      //Clear the buffer
    printf("Enter a noun (animal or person): ");
    char noun[30];
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1 ] = '\0';

    printf("Enter an adjective (description): ");
    char adjective2[30];
    scanf(" %s", adjective2);

    printf("Enter a verb (ending w/ -ing): ");
    char verb[30];
    scanf(" %s", verb);

    printf("Enter an adjective (description): ");
    char adjective3[30];
    scanf(" %s", adjective3);

    printf("Today I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);

    return 0;
}
