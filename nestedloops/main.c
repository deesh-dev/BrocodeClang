#include <stdio.h>

int main(void){
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    int columns;
    scanf("%d", &columns);

    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("*");
    }
    printf("\n");
    }

    return 0;
}