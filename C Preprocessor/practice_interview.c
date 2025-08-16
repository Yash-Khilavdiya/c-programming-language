#include<stdio.h>

void  greet(){
    printf("Good Morning");
}

int main(){
    int a ;
    printf("Hello World !!");
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("%d",a) ;
    if(a==4){
        printf("YES");
        greet();
    }
    else{
        printf("NO");
        greet();
    }
    return 0 ;
}