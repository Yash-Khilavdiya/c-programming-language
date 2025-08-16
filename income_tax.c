# include<stdio.h>

int main(){
    int income;
    float tax=0;
      

    printf("enter your income\n");
    scanf("%d", &income);




 if( income>250000 && income<=500000){
 tax = tax + (income -250000)*0.1;
 }

 if(income>500000 && income<=1000000){

 tax = tax + (income -500000)*0.20;
} 


 if(income>1000000){
tax = tax + (income -1000000)*0.30;
}

printf("you have to pay an income tax of rupees %f ", tax);


    return 0;
}