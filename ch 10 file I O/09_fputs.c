#include <stdio.h>

int main(){

FILE*ptr;
ptr=fopen("fputs.txt", "w");
char ch[10];  
printf("Enter your name\n");
gets(ch);
fputs(ch,ptr);

return 0;

}          