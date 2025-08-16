# include<stdio.h>

int main(){

int n;

    printf("enter the value of n\n");
    scanf("%d",&n);
    //for(int i=n;i>0;i--)---> it is a doubt for you   why it stops at 0=== here there is no need to use i>0 for the no greater than 1 
for(int i=n;i;i--)
    {

        printf("%d\n",i);
    }
    return 0;
}