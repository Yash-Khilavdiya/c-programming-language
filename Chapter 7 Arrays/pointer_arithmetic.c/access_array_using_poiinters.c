#include <stdio.h>

int main(){

    int i,marks[10];

    int *ptr;

    ptr=marks;
    ptr=&marks[0];

    for(i=0;i<20;i++){

        printf("Enter the marks of student %d :\n",i+1);
        scanf("%d", ptr);

        ptr++;
    }


    for(i=0;i<20;i++){
    printf("The marks of sudent %d is %d\n", i+1, marks[i]);

    }
        
    
   

return 0;

}