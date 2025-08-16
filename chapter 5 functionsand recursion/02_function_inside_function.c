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
    printf("good morning\n");
    goodevening();

    }




    void goodevening(){
    printf("good evening\n");
    goodnight();


    }
 void goodnight(){
    printf("GOOD evening\n");
 }