#include <stdio.h>
#include<stdlib.h>

int main(){

    float* ptr;
    int size;

    printf("Enter the size of array\n");
    scanf("%d", &size);
    ptr=(float*)malloc(size*sizeof(float));
 
        for(int i=0;i<size;i++){
        printf("Enter %d element\n", i+1);
        scanf("%.10f", &ptr[i]);
    }

    for(int i=0;i<size;i++){
        printf("%d element is %.10f\n",i+1, ptr[i]);
    }


return 0;

}