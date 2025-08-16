#include <stdio.h>
#include<stdlib.h>
int main(){

    printf("File name is %s \n", __FILE__);
    printf("Today's date is :%s\n", __DATE__);
    printf("Current time is %s\n",__TIME__);
    printf("Currrent line is %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);

return 0;

}