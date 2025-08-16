#include <stdio.h>
typedef struct complex_number{
int real;
int img;
}cmpl;
int main(){

    cmpl v[5];


    for(int i=0;i<5;i++){
          printf("Enter real number of your %d problem \n",i+1);
    scanf("%d",&v[i].real);
    printf("Enter real number of your  %d problem\n" ,i+1);
    scanf("%d",&v[i].img);
    }

    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[0].real);
    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[0].img);


    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[1].real);
    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[1].img);


    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[2].real);
    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[2].img);


    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[3].real);
    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[3].img);
    

    //     printf("Enter real number of your problem\n");
    // scanf("%d",&v[4].real);
    // printf("Enter real number of your problem\n");
    // scanf("%d",&v[4].img);



    printf("Problem 1 : %dx + %dy\n", v[0].real,v[0].img) ;
    printf("Problem 2 : %dx + %dy\n", v[1].real,v[1].img) ;
    printf("Problem 3: %dx + %dy\n", v[2].real,v[2].img) ;
    printf("Problem 4 : %dx + %dy\n", v[3].real,v[3].img) ;
    printf("Problem 5 : %dx + %dy\n", v[4].real,v[4].img) ;


return 0;

}