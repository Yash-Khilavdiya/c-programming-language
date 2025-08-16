#include <stdio.h>

int main(){

    int i=4;

    int*a;
    a=&i;
    int**b;
     b=&a;

    printf("This is the value of i =%d", **b);  //here we have to dereference it two times to get the value of i.

return 0;

}