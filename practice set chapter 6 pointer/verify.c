#include <stdio.h>
void tentimes(int a);
int main(){

    int a=4;

tentimes(a);
printf("The value of a is %d" ,a);



return 0;

}

void tentimes(int a){
int c;

c=10*a;

printf("The value of a is %d\n", c);

}