# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){


int number,guess,nguess=1;
int number, guess,nguess=1;

srand(time(0));
number=rand()%100+1;
// printf("The numer is %d\n",number);




do{


    printf(" guess the number between 1 and 100\n");
scanf("%d",&guess);


    if(number<guess){
    printf("lower number please!\n");
}

else if(number>guess){
    printf("higher number please!\n");
}


else {

    printf("you gussed right in %d aattempts\n", nguess);
}

nguess++;

}while(guess!=number);
return 0;
}

