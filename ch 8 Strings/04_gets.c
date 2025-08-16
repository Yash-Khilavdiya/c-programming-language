#include <stdio.h>

int main(){
    char c;
    int i=0;
    char s1[40];
    char s2[40];
    printf("ENTER YOUR NAME:\n");
    scanf("%s", &s1);
   
   
   printf("ENTER YOUR FATHER'S NAME\n");
   

while(c!= '\n'){
 fflush(stdin);
   scanf("%c", &c);
   s2[i]=c;
   
    i++;
}

s2[i]='\0';
    

printf("The value at string 1 is %s",s1);
printf("The value at string 2 is %s",s2);
return 0;

}