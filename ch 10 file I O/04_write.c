#include <stdio.h>

int main(){

    FILE *ptr;
    ptr=fopen("genrate.txt", "w");
int num=4;
fprintf(ptr, "Hi how are you \n");
fprintf(ptr, "We welcome you\n ");
fprintf(ptr,"This is number %d",num);

fclose(ptr);
return 0;

}