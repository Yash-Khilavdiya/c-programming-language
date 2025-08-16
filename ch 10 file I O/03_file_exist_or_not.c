#include <stdio.h>

int main(){

    FILE* ptr;
    ptr=fopen("yash2.txt", "r");

    if(ptr==NULL){
        printf("The file does not exist\n");
    }


    else{
         int num ;
    int num2;

    fscanf(ptr,"%d", &num);
        fscanf(ptr,"%d", &num2);

    printf(" The value stored in file is :\n%d",num);
        printf(" \nThe value stored in file is :\n%d",num2);
    }

return 0;

}