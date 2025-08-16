#include <stdio.h>

int main(){

    FILE* ptr;




ptr=fopen("double.txt", "r");


int n1;
int i=2;
fscanf( ptr,"%d", &n1);

fclose(ptr);
ptr=fopen("double.txt", "w");
fprintf(ptr, "%d", i*n1);

fclose(ptr);
return 0;
}
