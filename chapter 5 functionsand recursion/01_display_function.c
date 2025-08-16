# include<stdio.h>

void display(); //function prototype
void goodmorning();
void goodevening();
void goodnight();

int main(){

printf("thi is display function\n");
display();           //function call
printf("display function ended\n");



goodmorning();
goodevening();
goodnight();
return 0;


}

void display(){              //function defination
    printf("this is display \n");

}






    void goodmorning(){
    printf("good morning");

    }




    void goodevening(){
    printf("good evening");


    }
 void goodnight(){
    printf("GOOD evening");
 }