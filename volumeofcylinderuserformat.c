# include<stdio.h>

int main(){
    int radius;
    int height;
    //float pi=3.14;
    printf("enter value of radius in meter \n");
    scanf("%d", &radius);
    printf("enter value of height in meter  \n");
    scanf("%d", &height);
    printf("volume of cylinder is \n %f m^2 ", 3.14*radius*radius*height );
    return 0;
}