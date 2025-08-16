#include <stdio.h>
float average(float x,float y, float z);
int main(){

float x,y,z;
printf("enter the value of x\n");
scanf("%f",&x);





printf("enter the value of y\n");
scanf("%f",&y);


printf("enter the value of z\n");
scanf("%f",&z);

float c;
c=average(x,y,z);

printf("The average of 3 no is %f",c);
    

return 0;

}

float average(float x,float y, float z){
float average;

average =(float)(x+y+z)/3;// this is way to typecast

return average;

}