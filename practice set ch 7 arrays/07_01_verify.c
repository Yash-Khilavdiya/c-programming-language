#include <stdio.h>

int main(){

    int a[10]={1,2,3,4,54,5,6,7,78,89};

    // int *ptr=&a[0];
    int *ptr=a;
    
    printf("%d\n", *ptr);
    

    ptr++;
    printf("%d\n", *ptr);

    ptr=ptr+2;
printf("%d\n", *ptr);

if(ptr==&a[3]){
    printf("These point to same location \n");
}

else{
    printf("These do not point to same location");
}

return 0;

}