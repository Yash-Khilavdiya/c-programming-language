#include <stdio.h>
void printadd(int a){

    printf("The address of  a is %u", &a);
}
int main(){

    int i=3;
    
    int *ptr;
    ptr=&i;

    printf("The address of i is %d\n", ptr );

    // change(i);

    //  printf("The address of i is %d\n", ptr );


    printadd(i);

printf("\nThe address of i is %d\n", ptr );
printf("The address of i is %d\n", &i );




return 0;

}

