#include <stdio.h>

int main(){

    int a=4,b=4;

    int matrix[4][4];

    for(int i=0;i<a;i++){

        for(int j=0;j<b;j++){

            printf("Enter the value of element %d of row %d \n ",i+1 ,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

printf("The required matrix is \n");
    
    for(int i=0;i<a;i++){

        for(int j=0;j<b;j++){

            printf(" %d  " ,matrix[i][j]);

        }

        printf("\n");
    }

return 0;

}