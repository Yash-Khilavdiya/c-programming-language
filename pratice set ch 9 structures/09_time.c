#include <stdio.h>
typedef struct time{
    int hours;
    int minutes;
    int second;
 
}time;

   void display(time t1, time t2){

       printf("%d:%d:%d\n", t1.hours, t1.minutes,t1.second );
    printf("%d:%d:%d\n", t2.hours, t2.minutes,t2.second );

   }


   int  timecmp(time t1, time t2){
       if (t1.hours<t2.hours){
           return 0;
       }

              if (t1.hours<t2.hours){
           return 0;
       }

              if (t1.minutes>t2.minutes){
           return 0;
       }


              if (t1.minutes>t2.minutes){
           return 0;
       }


              if (t1.second<t2.second){
           return 0;
       }


              if (t1.second>t2.second){
           return 0;
       }

       else{
           printf("Both the times are equal\n");
       }

   }  



int main(){

time t1;

t1.hours=11;
t1.minutes=55;
t1.second=23;


time t2;

t2.hours=11;
t2.minutes=55;
t2.second=23;
display(t1,t2);

int c= timecmp(t1,t2);
 
printf("The difference in time is %d", c);
return 0;

}