# include<stdio.h>

int main(){

  int i,product=1,n;

    printf("enter the value of n\n");
    scanf("%f",&n);
    

    for(i=1;i<=n;i++){

        product*=i;
    }


    printf("the sum of n natural numbers is %f", product);
    return 0;
}