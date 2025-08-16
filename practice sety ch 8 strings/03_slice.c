

//try all these program one more time 
//try all these program one more time 




#include <stdio.h>
void slice(char *str,int m,int n){

    int i=0;
    while ( m<n){
                str[i]=str[i+m];
                i++;

}
str[i]='\0';


    }
  


int main(){

    char arr[]="yash khilavdiya";

    slice(arr, 4 , 7 );

    printf("%s",arr);
    

return 0;

}