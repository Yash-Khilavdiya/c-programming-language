#include <stdio.h>
#include<string.h>
struct employee{
    char name[10];
    float salary;
    int age;
};
int main(){


    struct employee yash={"Yash", 17000, 17};

    printf("%s\n",yash.name);
        printf("%f\n",yash.salary);
            printf("%d\n",yash.age);

    

return 0;

}