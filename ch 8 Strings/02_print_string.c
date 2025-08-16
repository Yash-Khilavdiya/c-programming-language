#include <stdio.h>

int main(){

char str[]={'h','a','r','r','y','\0'};

char s[]={"yash"};
char *ptr=str;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
}
printf("\n");
char *p=s;
while(*p!='\0'){
    printf("%c",*p);
p++;
}
return 0;

}