#include <stdio.h>
int sum(int a, int b){
    return a+b;

}
int main(){

    int (*fptr)(int , int );
    fptr=&sum;
    int d=(*fptr)(4,6);
    printf("The value of d is %d\n",d);
    int e=(*fptr)(20,56);
    printf("The value of e is %d\n",e);
    // printf("The sum of and b is : %d\n", sum(1,2)); //for testing the function 

return 0;

}