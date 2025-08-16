// # include<stdio.h>

// int main(){
//     int n;
//     int i=1;

//     printf("enter the value of n\n");
//     scanf("%d",&n);

//     while(i<=10){

//         printf("%d\n", i*n);

//         i++;
//     }
//     return 0;
// }


//the upper one is right code you can run it the code written below is table in reverse order

# include<stdio.h>

int main(){
    int n;
    int i=10;

    printf("enter the value of n\n");
    scanf("%d",&n);

    while(i>0){

        printf("%d\n", i*n);

        i--;
    }
    return 0;
}