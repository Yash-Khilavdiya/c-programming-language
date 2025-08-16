#include <stdio.h>
float celcius_to_farheniet(float celcius);

int main(){
float celcius;
    printf("enter temprature in celcius");
    scanf("%f",&celcius);

    float c;
     c=celcius_to_farheniet(celcius);
     
printf("farheniet tempratur is %f",c);
return 0;

}

float celcius_to_farheniet( float celcius){


float farheniet;
farheniet=(celcius*9/5)+32;

return farheniet;

}