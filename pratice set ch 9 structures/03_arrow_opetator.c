#include <stdio.h>
typedef struct stu{
    char name[19];   //for name not working properly
    int marks;
}stu;
int main(){

    stu s1;
    stu *ptr =&s1;
    
    ptr->name[19]="yash";
ptr->marks=78;


puts(ptr->name);
printf("%d\n", ptr->marks);




return 0;

}