#include <stdio.h>
#include <stdlib.h>


int main(){

    int *ptr;
    int size;
        printf("Enter the size of array\n");
    scanf("%d", &size);
    ptr=(int *)calloc(size, sizeof(int));
        for(int i=0;i<size;i++){
        printf("Enter %d element\n", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<size;i++){
        printf("%d element is %d\n",i+1, ptr[i]);
    }

return 0;

}