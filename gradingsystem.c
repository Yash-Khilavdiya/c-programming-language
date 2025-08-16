# include<stdio.h>

int main(){
    int marks;

printf("enter your marks");
scanf("%d", &marks);


if(marks<=20 && marks>=0){
printf("your grade is E");
}

else if(marks>20 && marks<=40){
printf("your grade is D");
}

else if(marks<=60 &&marks>40){
printf("your grade is C");
}

else if(marks<=80 &&marks>60){
printf("your grade is B");
}

else if(marks<=100 &&marks>80){
printf("your grade is A");
}


else
{
    printf("invalid marks");
}


    return 0;
}