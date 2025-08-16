#include <stdio.h>

int main(){

    FILE * ptr;
    ptr=fopen("table.txt","w");
int num;
 printf("Of which number of table you wnat\n");
scanf("%d", &num);

for(int i=1;i<=10;i++){
   int table=(num*i);
    fprintf(ptr, "%d x%d = %d\n",num,i,table );
}
fclose(ptr);
return 0;

}
