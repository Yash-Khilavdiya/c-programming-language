# include<stdio.h>

int main(){
    float principal, rate, duration;
    float intrest=(principal*rate*duration)/100;
    printf("enter the vlaue of principal\n");
    scanf("%f", &principal);
     printf("enter the vlaue of rate\n");
    scanf("%f", &rate);
     printf("enter the vlaue of duration\n");
    scanf("%f", &duration);
    printf("this is value of intrest %f", intrest=(principal*rate*duration)/100);
    return 0;
}