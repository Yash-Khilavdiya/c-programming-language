#include <stdio.h>
#include<string.h>
typedef struct employee{
    char name[10];
    float salary;
    int age;
}emp ;
int main(){

    emp e1;
        

        printf("Enter Employee  name\n" );
        scanf("%s", &e1.name);
        printf("Enter Employee  salary\n ");
        scanf("%f", &e1.salary);
        printf("Enter Employee  age\n" );
         scanf("%d", &e1.age);        

struct employee e2;

        printf("Enter Employee name\n" );
        scanf("%s", &e2.name);
        printf("Enter Employee salary\n ");
        scanf("%f", &e2.salary);
        printf("Enter Employee age\n" );
         scanf("%d", &e2.age);        
    


    struct employee e3;

            printf("Enter Employee name\n" );
        scanf("%s", e3.name);
        printf("Enter Employee1 salary\n ");
        scanf("%f", &e3.salary);
        printf("Enter Employee age\n" );
         scanf("%d", &e3.age);        

    printf("Employee name is %s\n",e3.name );
    printf("Employee salary is %.3f\n",e1.salary );  
    printf("Employee age is %d\n",e1.age );
    



return 0;

}