#include <stdio.h>

int main(){

    int a , *ptr;

    ptr=&a;
     
     printf("The address  of a is %d\n", ptr);

     ptr++;

     printf("The address  of a is %d\n", ptr);

     ptr=ptr+2;   //here +2 means that do not plus two plus two memory size that is for int 4 bytes for int so for + 2 it will add two

    printf("The address  of a is %d\n", ptr);

    ptr--;

     printf("The address  of a is %d\n", ptr);

    ptr=ptr-2;

     printf("The address  of a is %d\n", ptr);

int b[10]={1,2,3,4,5,6,7,8,};

int *x,*y;
x=&b[7];
y=&b[6];


printf("%d\n",x);
printf("%d\n",y);

int c=x-y;
printf("The memory occupied by the datatype int is %d\n", c);  //it wil show  answer 1 because you add one for one int addition
int *d;
d=&b[7];
printf("The value stored at memory address %d is %d", (&b[7]+1), *(d+1)); // why it is showing zero check it





return 0;

}