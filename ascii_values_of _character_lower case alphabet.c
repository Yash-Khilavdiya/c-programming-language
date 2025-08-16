# include<stdio.h>

int main(){
    char a;

    printf("enter a character\n");
    scanf("%c", &a);

    printf("the ascii value of character %c is %d\n" ,a,a);
   // printf("the ascii value of character %c = %d" ,a,a);
    
    
    if(a>=97 && a<=122){
        printf("this is a lowercase alphabet");
    }
    
    else{
        printf("this is not a lowercase alphabet");
    }
    return 0;



}
