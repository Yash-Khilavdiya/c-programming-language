#include <stdio.h>
typedef struct timedate{
    int year;
    int month;
    int date;
    int hours;
    int minutes;
    int second;
 

 
}timedate;


void display(timedate td1, timedate td2){

       printf("%d/%d/%d :: %d:%d:%d\n", td1.date, td1.month,td1.year, td2.hours, td2.minutes,td2.second  );
    printf("%d/%d/%d :: %d:%d:%d\n", td2.date, td2.month,td2.year, td2.hours, td2.minutes,td2.second  );

   }


      int  datecmp(timedate td1, timedate td2){
       if (td1.year<td2.year){
           return 0;
       }

              if (td1.year<td2.year){
           return 0;
       }

              if (td1.year>td2.year){
           return 0;
       }


              if (td1.month>td2.month){
           return 0;
       }


              if (td1.date<td2.date){
           return 0;
       }


              if (td1.date>td2.date){
           return 0;


                 if (td1.hours<td2.hours){
           return 0;
       }

              if (td1.hours<td2.hours){
           return 0;
       }

              if (td1.minutes>td2.minutes){
           return 0;
       }


              if (td1.minutes>td2.minutes){
           return 0;
       }


              if (td1.second<td2.second){
           return 0;
       }


              if (td1.second>td2.second){
           return 0;
       }
       }





       else{
           printf("Both the timedate are equal\n");
       }

   }  






int main(){

    
timedate td1;

td1.date=23;
td1.month=8;
td1.year=2021;
td1.hours=11;
td1.minutes=55;
td1.second=23;

timedate td2;

td2.date=4;
td2.month=9;
td2.year=2021;
td1.hours=10;
td1.minutes=12;
td1.second=22;
display(td1,td2);

int c= datecmp(td1,td2);
 
printf("The difference in timedate is %d", c);

return 0;

}