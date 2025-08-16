#include <stdio.h>

int main(){

    FILE* ptr;
    ptr=fopen("01pr.txt","r");
    int n1,n2,n3;
    fscanf(ptr, "%d", &n1);   //you can also use one scanf and use 3 times %d
    fscanf(ptr, "%d",& n2);
    fscanf(ptr, "%d", &n3);


    printf("%d\n", n1);
        printf("%d\n", n2);
            printf("%d", n3);

return 0;

}