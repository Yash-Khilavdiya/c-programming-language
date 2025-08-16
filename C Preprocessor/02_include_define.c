#include <stdio.h>
#include "reference.c"
#define PI 3.14
#define areacircle(r) r*r
int main(){
float a=PI;
printf("This is the value of a : %f\n",a);
printf("This is the value of PI : %f\n",a);
float b=a*areacircle(4);
printf("This is the area of the circle : %f\n",b);

    

return 0;

}