#include <stdio.h>
#include <stdlib.h>


int main(){

    int *ptr;
    int size;
    printf("Enter the size of array \n");
    scanf("%d", &size); 

    ptr=(int *)calloc(size,
    
    sizeof(int));

    for(int i=0;i<size;i++){
        ptr[i]=7*(i+1);
    }


     for(int i=0;i<size;i++){
        printf(" 7 X %d = %d\n",i+1, ptr[i] );
    }



    int newsize;
    printf("Enter the size of  new array \n");
    scanf("%d", &newsize);

    
    ptr=(int *)realloc(ptr, newsize*sizeof(int));

    for(int i=0;i<newsize;i++){
         ptr[i]=7*(i+1);
        
    }


     for(int i=0;i<newsize;i++){
        printf(" 7 X %d = %d\n",i+1, ptr[i] );
    }
free(ptr);


return 0;

}