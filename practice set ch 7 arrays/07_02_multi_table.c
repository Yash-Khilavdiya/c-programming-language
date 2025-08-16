#include <stdio.h>

int main(){

    int i,table[10],n;
    
        printf("Write the number you nedd table of  \n " );
        scanf("%d", &n);

for(i=0;i<10;i++){

    table[i]=n*(i+1);

    // scanf("%d", &table[i]);  //dont use this scanf other wise this function will not work . because user have to give value for it and there is no option for user to feed , and here you are directly assigning values to table then in another loop printing it .
}



for(i=0;i<10;i++){

    printf("%d * %d = %d\n", n,i+1,table[i]);
}




return 0;

}