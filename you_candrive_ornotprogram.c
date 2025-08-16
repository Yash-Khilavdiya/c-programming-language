#include<stdio.h>

 int main(){
     int age;
     int a;
     a=1;
    
    printf("enter your age\n");
    scanf("%d", &age);

 if((age>=18 && age <=70) || a ==1)
    {            printf("you can drive");

    } 

    else{
        printf("you cannot drive");
    }

    return 0;
    }