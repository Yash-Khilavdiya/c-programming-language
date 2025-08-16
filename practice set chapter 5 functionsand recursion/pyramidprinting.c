#include <stdio.h>
void pyramid(int n);

int main(){


pyramid(5);

    

return 0;

}

void pyramid(int n){

if (n==1){
    printf("*\n");
    return;

}

pyramid(n-1);

for(int  i=0;i<n;i++){

    printf("*");
}

printf("\n");
}