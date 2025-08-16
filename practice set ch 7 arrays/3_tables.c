#include <stdio.h>
void multable(int *arr, int num, int n ,int level ){
for(int i=0;i<n;i++){
    arr[level][i]=num*(i+1);}
    for( i=0;i<n;i++){
    printf("%dX%d=%d\n", n, i+1, arr );
}
printf("***********************************************\n\n");
}

int main(){

    int table[3][10];  

    multable(table,2,10,0);
    multable(table,7,10,1);
    multable(table,9,10,2);


  
 
    

return 0;

}