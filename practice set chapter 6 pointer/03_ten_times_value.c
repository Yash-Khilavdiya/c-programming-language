//try it again



#include <stdio.h>


void multiplier(int *a);

int main(){

    int a=9;
    
    multiplier(&a);

    // printf("The value if a after function call is %d",b);



return 0;

}

void multiplier(int *a ){
int c;
   c=10*(*a);
   printf("The value after function call is %u", c);
   
}