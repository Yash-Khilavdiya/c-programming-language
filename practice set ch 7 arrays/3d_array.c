#include <stdio.h>

int main(){

    int arr[5][10][15];
    int a=5, b=10,c=15;
for(int i=0;i<5;i++){
                for(int j=0;j<b;j++){
                    for(int k=0;k<c;k++){
                        printf("The address of location arr[%d][%d][%d] is %d\n\n",i+1,j+1,k+1, &arr[i][j][k] );
                    }
                }
}

return 0;

}