#include <stdio.h>

int main(){

    FILE * ptr;
FILE*prt2;
    ptr=fopen("read.txt", "r");
prt2=fopen("write.txt", "w");

char c;
while(c!=EOF){
    c=fgetc(ptr);
    fputc(c, prt2);

    
}

while(c!=EOF){
    c=fgetc(ptr);
    fputc(c, prt2);

    
}


fclose(ptr);
fclose(prt2);
return 0;

}
