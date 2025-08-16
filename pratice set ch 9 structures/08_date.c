#include <stdio.h>
typedef struct Date{
    int date;
    int month;
    int year;
 
}date;

   void display(date d1, date d2){

       printf("%d/%d/%d\n", d1.date, d1.month,d1.year );
    printf("%d/%d/%d\n", d2.date, d2.month,d2.year );

   }


   int  datecmp(date d1, date d2){
       if (d1.year<d2.year){
           return 0;
       }

              if (d1.year<d2.year){
           return 0;
       }

              if (d1.year>d2.year){
           return 0;
       }


              if (d1.month>d2.month){
           return 0;
       }


              if (d1.date<d2.date){
           return 0;
       }


              if (d1.date>d2.date){
           return 0;
       }

       else{
           printf("Both the dates are equal\n");
       }

   }  



int main(){

date d1;

d1.date=23;
d1.month=8;
d1.year=2021;


date d2;

d2.date=9;
d2.month=0;
d2.year=2021;
display(d1,d2);

int c= datecmp(d1,d2);
 
printf("The difference in date is %d", c);
return 0;

}