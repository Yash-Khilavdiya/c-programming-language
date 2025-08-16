#include <stdio.h>
float force(float mass);

int main(){


int c;
c=force(20);
printf("%d",c);



    

return 0;

}

float force(float mass){

float force;
float c;
c=9.8;
force=mass*9.8;
return force;


}