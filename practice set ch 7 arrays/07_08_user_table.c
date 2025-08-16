#include <stdio.h>
void multable(int *table1, int num1){
for(int i=0;i<10; i++)

{
table[0]=num1*(i+1);

}


for( int i=0;i<10; i++){

    printf("%dX%d=%d\n",num1, (i+1), num1*(i+1));
}
}

int main(){

int table[3][10];


int num1;
printf("Which table do you want to print \n");
scanf("%d", &num1);

multable(table, 10);









return 0;

}