#include<stdio.h>

int main(){

    int n,i;


    printf( "enter the value of n\n");
    scanf("%d",&n );


    for(i=0;i<=n;i++){

           if (i!=8){
               continue;
           }
    

        else {
            printf("%d",i);
        }
    }

        return 0;
    }

