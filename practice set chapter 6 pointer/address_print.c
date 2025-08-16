#include <stdio.h>

int main(){

    int a;
    a=3;

    int *b;
    b=&a;

    printf("The address of a is %u\n",b);
        printf("The address of a is %u\n",&a);
            printf("The value of a is %u\n",*(&a));
                printf("The value of a is %u\n",*b);

return 0;

}