#include <stdio.h>
#include <stdlib.h>

int main(){

    int * ptr;
    printf("The size of int in your PC is %d \n", sizeof(int ));
    printf("The size of float in your PC is %d \n", sizeof(float));
    printf("The size of char in your PC is %d \n", sizeof(char));
    
    int size;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    ptr=(int *) malloc(size*sizeof(int) );
    for(int i=0;i<size;i++){
        printf("Enter %d element\n", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<size;i++){
        printf("%d element is %d\n",i+1, ptr[i]);
    }

return 0;

}