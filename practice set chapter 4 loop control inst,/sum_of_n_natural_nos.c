# include<stdio.h>

int main(){

  float i,sum=0,n;

    printf("enter the value of n\n");
    scanf("%f",&n);
    

    while(i<=n){



        sum+=i;
        i++;
    }


    printf("the sum of n natural numbers is %f", sum);
    return 0;
}