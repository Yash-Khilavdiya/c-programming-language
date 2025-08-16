#include <stdio.h>

int main(){

    int a,n,i=1;
    printf("How the number of rows\n");
    scanf("%d",&n);


  for ( i=1; i<=n ; i++){
                        
                     for(int j=1; j<=(n-i);j++){
                             printf(" ");
                     
                     }

                     

                     for(int j=1; j<i; j++){
                                printf("*");

                         }
        

                    

                     

                     printf("\n");

                
                }

   for ( i=(n-1); i>=1 ; i--){
                        
                for(int j=1;j<(n-i);j++){
                             printf(" ");
                     
                     }

                     

                     for(int j=1; j<=i; j++){
                                printf("*");

                         }
        

                    

                     

                     printf("\n");

                
                }
        
return 0;
}

  