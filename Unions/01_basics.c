#include <stdio.h>
#include <string.h>
typedef union active_employee{
    int id;
    int marks;
} act ;
int main(){

act a1;
a1.id=3; //its garbage vallue will be shown 
a1.marks=56;

printf("This is id: %d\n",a1.id);
printf("This is your marks: %d\n",a1.marks);



    

return 0;

}