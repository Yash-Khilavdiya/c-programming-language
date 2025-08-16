#include <stdio.h>
#include <stdlib.h>

int main(){

    int * ptr;
    int *ptr2;
    printf("The size of int in your PC is %d \n", sizeof(int ));
    printf("The size of float in your PC is %d \n", sizeof(float));
    printf("The size of char in your PC is %d \n", sizeof(char));
    
    int size;
    // printf("Enter the size of array\n");
    // scanf("%d", &size);
    ptr=(int *) malloc(600*sizeof(int) );
    for(int i=0;600<size;i++){
        ptr2=(int *)malloc(60000*sizeof(int ));
        printf("Enter %d element\n", i+1);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }

    for(int i=0;i<size;i++){
        printf("%d element is %d\n",i+1, ptr[i]);
    }

return 0;

}