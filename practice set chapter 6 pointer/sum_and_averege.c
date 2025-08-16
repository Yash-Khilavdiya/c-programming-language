#include <stdio.h>
 void sumandavg(int a,int b, int *sum, int *avg); //avg function is not working properly so try sort it out 
int main(){

   int a,b,sum;
   int avg;

printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
  sumandavg(a,b,&sum,&avg);

  printf("The sum of %d and %d is %d\n", a,b,sum);
    printf("The average of %d and %d is %d\n", a,b,avg);









return 0;

}


void sumandavg(int a,int b, int*sum, int*avg){

*sum=a+b;
*avg=a+b/2;
}
