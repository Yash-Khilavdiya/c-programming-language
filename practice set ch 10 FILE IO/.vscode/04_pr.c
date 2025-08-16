#include <stdio.h>

int main(){

    FILE * employee;
    employee=fopen("employee.txt", "w");
    char name[40];
    printf("Enter the name of employee 1\n");
    for (int i=0; i<'\n';i++){
        fscanf(employee,"%d", &name[i]);
    }
    int salary;
    printf("Enter the salary of employee 1\n");
    scanf("%f" , &salary);
    puts(salary, employee);



     printf("Enter the name of employee 1\n");
    for (int i=0; i<'\n';i++){
        fscanf(employee,"%d", &name[i]);
    }
    
    
    printf("Enter the salary of employee 1\n");
    scanf("%f" , &salary);
    puts(salary, employee);
return 0;

}