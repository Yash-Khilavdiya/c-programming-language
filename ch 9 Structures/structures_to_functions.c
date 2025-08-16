#include <stdio.h>
#include <string.h>
struct employee
{
    char name[10];
    float salary;
    int age;
};

void show(struct employee e)
{

    printf("Employee name is %s\n", e.name);
        printf("Employee salary is %f\n", e.salary);
    printf("Employee age is %d\n", e.age);
}
int main()
{

    struct employee e1;

    strcpy(e1.name,"Yash");
    e1.salary=17000;
    e1.age=17;

    show (e1);

    return 0;
}