#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);
    printf("%d", a % 2);
    b = a % 2;
    if (b == 0)
    {
        printf("\n%d is even", a);
    }
    else
    {
        printf("\n%d is odd", a);
    }
    return 0;
}