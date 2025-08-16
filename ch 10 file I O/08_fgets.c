#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("fgets.txt", "r");

    char ch[10];
    fgets(ch, 8, ptr);
    
    printf("%s\n", ch);
    fclose(ptr);

    return 0;
}