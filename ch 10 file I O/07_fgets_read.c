#include <stdio.h>

int main()
{
    char c;
    FILE *ptr;
    ptr = fopen("fgetc.txt", "r");

    char str[1000];
    int i = 0;

    while (c != EOF)
    {
        str[i] = fgetc(ptr);
        i++;
    }

    i=0;
    while (str[i] != EOF){
        printf("%c", str[i]);
        i++;
    }

    // printf("%s", str);

    return 0;
}
