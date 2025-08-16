#include <stdio.h>

//Try to explore use of callback functions.
int sum(int a,int b){
    return a+b;
}
void greetHelloAndExecute(int(*fptr)(int,int)){
    printf("Helllo user\n");
    printf("The sum of 4 and 9 is: %d\n",sum(4,9));
}

void greetGmandExecute(int(*fptr)(int,int)){
    printf("Good Morning User\n");
    printf("Teh sum of 3 and 6 is :%d\n", sum(3,6));
}
int main(){

int (*ptr)(int,int);
ptr=sum;
greetGmandExecute(ptr);
greetHelloAndExecute(ptr);
    

return 0;

}