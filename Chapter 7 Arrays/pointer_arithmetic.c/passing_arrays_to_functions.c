
//try to revise it and understand it again i so not understand it
//now understand
//all three methods are same

#include <stdio.h>
// void printarray(int *ptr,int n){    //think deply you will get the answer
//     int i=0;
// for(i=0;i<n;i++){
//     printf("The %d element of array is %d\n", i+1, *(ptr+i));  //here *(ptr+i) is dereferencing
// }
// }



void printarray(int ptr[],int n){    //think deply you will get the answer
    int i=0;
for(i=0;i<n;i++){
    printf("The %d element of array is %d\n", i+1, *(ptr+i));  //here *(ptr+i) is dereferencing
}

ptr[5]=6666;
}

//these both are the same things *(ptr+i)==ptr[i]


// void printarray(int ptr[],int n){    //think deply you will get the answer
//     int i=0;
// for(i=0;i<n;i++){
//     printf("The %d element of array is %d\n", i+1, ptr[i]);  //here *(ptr+i) is dereferencing
// }
// }




int main(){
 
    int arr[]={1,3,4,5,6,7,8,45,324,34};
   
    printarray(arr, 10);  //since we are passing address so the value will get cahnged 

    

return 0;

}