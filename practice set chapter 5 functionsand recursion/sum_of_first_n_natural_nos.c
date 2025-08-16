#include <stdio.h>
int natural(int n);
int main(){


int n;
  printf("enter the value of n\n");
  scanf("%d",&n);

  int sum;
  sum=natural(n);

  printf("this is the sum of fist n natural nos %d",sum);

    

return 0;

}

int natural(int n){

printf("sum call(%d)\n",n);

int sum;

  if (n==1){
      return sum=1;
  }

  else{
     return n+natural((n-1));
  }
}