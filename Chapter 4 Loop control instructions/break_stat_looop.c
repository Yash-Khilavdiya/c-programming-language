# include<stdio.h>

int main(){
    
    int i;
    i=0;

    do{
        printf("%d\n", i);
        {
       
        if(i==6)

            break;
        }
             i++;
        } while(i<40);
    
    return 0;
}