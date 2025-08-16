#include <stdio.h>
#include <string.h>

struct employee{
    char name[10];
    float salary;
    int age;
};
int main(){

    struct employee facebook[100];

    strcpy(facebook[0].name,"Yash");
    facebook[0].age=45;
    facebook[0].salary=78987;



    strcpy(facebook[2].name,"Yash");
    facebook[2].age=45;
    facebook[2].salary=78987;



    strcpy(facebook[2].name,"Yash");
    facebook[2].age=45;
    facebook[2].salary=78987;

return 0;

}