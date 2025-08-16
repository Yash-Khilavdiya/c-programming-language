// #include <stdio.h>
// void reverse(int *a , int n){

// for(int i=n; i<n; i--){
//     printf("%d\n", *(a+i));
// }

// }
// int main(){

//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     reverse(&arr[9], 9);


// return 0;

// }  not working



#include <stdio.h>
void reverse(int *a, int n ){

    for(int i=0;i<n/2;i++ ){

        int temp;
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;

       
    }
}
int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    reverse(arr,8);

    for (int i=0; i<8 ; i++){

        printf("%d\n", arr[i]);
    }



return 0;

}