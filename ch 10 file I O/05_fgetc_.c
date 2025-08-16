#include <stdio.h>

int main(){

    FILE*ptr;
    ptr=fopen("fgetc.txt","r");

    printf("This is character in file %c\n ", getc(ptr));// getc and fgetc both reads
  printf("This is character in file %c\n ", fgetc(ptr));

    printf("This is character in file %c\n ", fgetc(ptr));

    printf("This is character in file %c\n ", fgetc(ptr));

    printf("This is character in file %c\n ", fgetc(ptr));

    printf("This is character in file %c\n ", fgetc(ptr));


return 0;

}