#include <stdio.h>

int main(){

    FILE*ptr;
    ptr=fopen("fputc.txt", "w");

    putc('f',ptr);
        putc('is',ptr);

    putc('a',ptr);

    putc("very",ptr);
fclose(ptr);

return 0;

}