 # include<stdlib.h>
 # include<stdio.h>
 #include<string.h>

 int main(){
     char * str;
     str=(char*)malloc (15);
     strcpy (str ,"hello");

free(str);

     printf("string=%s,address=%u" ,str,str );


     str=(char*)realloc (str,35);
     strcat (str,".com");
     printf("string=%s,address=%u ,str,str");

     free(str);

     return 0;
 } 