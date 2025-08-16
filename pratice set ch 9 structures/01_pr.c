#include <stdio.h>
#include<string.h>
typedef struct vector{
    int a;
    int b;
} vec;
int main(){

    // vec v1;

    struct vector vi;

    // vector.a=8;
    // vector.b=8;

    vi.a=3;
    vi.b=2;
    printf("This is value of vector a %d\n", vi.a);
    printf("This is value of vector b %d\n", vi.b);

    

return 0;

}