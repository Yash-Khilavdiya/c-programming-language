#include <stdio.h>

int main(){

    FILE* ptr;
    ptr=fopen("file3.txt","r");
    // ptr=fopen("file2.txt","w");

    int num;

    fscanf(ptr, " %d", &num);

    printf("This is number stored in file \n %d", num);

return 0;

}