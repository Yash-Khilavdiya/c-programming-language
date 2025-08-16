#include <stdio.h>
typedef struct complex_number{
int real;
int img;
}cmpl;
int main(){

cmpl c1 ; 

c1.real=5;
c1.img=8;

printf("The real part of complex no. is %d and img part is %d", c1.real, c1.img);

return 0;

}