#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main(){
    int a=3;
    int b=4;

    printf("The value of a and b before wrong swap is %d and %d\n",a,b);

    wrong_swap(a,b); //will not swap using call by reference
    printf("The value of a and b after wrong swap is %d and %d\n",a,b);
    printf("The value of a and b before  swap is %u and %u\n",a,b);

      swap(&a,&b);will swap using call by reference
    printf("The value of a and b after  swap is %u and %u\n",a,b);
    
    


    

return 0;

}

void wrong_swap(int a, int b)
{
int temp;

temp=a;
a=b;
b=temp;

}


void swap(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}