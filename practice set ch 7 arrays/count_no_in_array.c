#include <stdio.h>
void count(int *arr, int n){
    int sum=0;
for(int i=0;i<n;i++){
if(*(arr+i)>0){

    sum=sum+1;
}


}

printf("The number of positive integers ia array is %d", sum);




}

int main(){

int arr[10]={1,2,-3,-4,-5,4,3,5,-5,6};

count(arr, 10);

return 0;

}