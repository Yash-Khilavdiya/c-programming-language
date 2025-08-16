#include <stdio.h>
int fibonacci(int n);
int main(){
int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

    int c;
    c=fibonacci(n);


    printf("This is the sum of fibonacci series upto %d number=%d", n, c);

    

return 0;

}

int fibonacci(int n){
int sum;
    if (n==1){
        sum=0;
    }

    else if(n==2){
        sum=1;
    }

    else if (n>2){
 

   sum= fibonacci(n-1)+fibonacci(n-2);
    }
    return sum;

}