#include <stdio.h>
#include <string.h>

int main(void){
    char names[3][25] = {{}};

    printf("Enter a name: "); 
    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names[0]) - 1] = '\0';

    printf("%s\n", names[0]);


    return 0;
}