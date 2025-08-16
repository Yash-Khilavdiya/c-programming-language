# include<stdio.h>

int main(){
    float a,b,c,d;

printf("enter value of a\n");
scanf("%f", &a);

printf("enter value of b\n");
scanf("%f", &b);

printf("enter value of c\n");
scanf("%f", &c);

printf("enter value of d\n");
scanf("%f", &d);


if (d>=a && d>=b && d>=c){
    printf("d is greatest");

}

else if(c>=a && c>=b && c>=d  ){
printf("c is greatest");
}

else if(a>=b && a>=d && a>=c  ){
printf("a is greatest");
}

else if(b>=a && b>=d && b>=c ){
printf("b is greatest");
}
    return 0;
}