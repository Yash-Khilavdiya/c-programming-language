#include <stdio.h>

int main(){

    FILE * file;
    file=fopen("yash.txt" , "r");

    int num ;
    int num2;

    fscanf(file,"%d", &num);
        fscanf(file,"%d", &num2);

    printf(" The value stored in file is :\n%d",num);
        printf(" \nThe value stored in file is :\n%d",num2);




return 0;

}