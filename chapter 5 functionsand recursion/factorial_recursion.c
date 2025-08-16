#include <stdio.h>
int factorial(int x);
int main(){

    int c=10;

    printf("The factorial of %d is %d ", c,factorial(c));

return 0;

}

int factorial(int x){
    printf("calling facatorial(%d)\n",x);

    if(x==0 || x==1 ){
        return 1;

    }
    
    else{
        return x*factorial(x-1);
    }
}
