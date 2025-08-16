# include<stdio.h>

int main(){
     float physics, chemistry, maths;
     float percentage;
    //percentage=(physics+chemistry+maths)/3 ;

     printf("enter your number in physics\n");
     scanf("%f", &physics);

     
     printf("enter your number in chemistry\n");
     scanf("%f", &chemistry);

     
     printf("enter your number in maths\n");
     scanf("%f", &maths);

     //you will have to define percentage here;

     percentage=(physics+chemistry+maths)/3 ;

     printf("your percentage is %f percent", percentage );



     if (percentage>=40 && physics>=33 && chemistry>=33 && maths>=33 ){
        printf("\ncongratulations! you are pass");
     }

     else {
         printf("\nsorry, you are fail");
     }


    return 0;
}