#include <stdio.h>
int sum(int a, int b);

int main(){

    int a=3, b=4;
printf("The value of a and b is %d and %d\n",a,b);
printf("The sum of a and b is %d\n", sum(a,b));
 printf("The value of a and b after function call is %d and %d\n",a,b);   

return 0;

}

int sum(int a, int b){

int c;
c= a+b;

a=5454;
b=7687;

return c;
}