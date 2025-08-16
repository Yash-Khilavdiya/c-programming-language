#include <stdio.h>

int main(){

    int i=0,marks[100]={1,2,3,4,5,6,7,34,23,23,45,5,6,45,45};
    
    marks[97]=98;

    // printf(" %d",marks[6]);
    // printf(" %d",marks[99]);
    // printf(" %d",marks[101]);
    // printf(" %d",marks[0]);  
    // printf(" %d",marks[67]) ;
    //     printf(" %d",marks[102]) ;
    for(i=0;i<100;i++){

        printf("marks:%d=%d\n" ,i ,marks[i]);
    }


return 0;

}