#include <stdio.h>
#include <string.h>
int strlen(int *str){           //while loop is better for strings

    char *ptr=str;
int sum=0;
  while(*ptr!='\0'){
      sum++;
      ptr++;
  }
  return sum;
        
        
    }


int main(){

char st1[100];

printf("Enter your Name\n");
gets(st1);

int c=lenstr(st1);
printf("The length of string is %d ", c);

return 0;

}