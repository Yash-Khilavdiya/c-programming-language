#include <stdio.h>
#include<string.h>
struct employee{
    char name[10];
    float salary;
    int age;
};
int main(){

    struct employee e1;
    struct employee *ptr;
    ptr=&e1;

    // (*ptr).age=78;
ptr->age=78;
    printf("Your age is %d", (*ptr).age);
        // printf("Your age is %d", *(ptr).age);    //this will not work






return 0;

}