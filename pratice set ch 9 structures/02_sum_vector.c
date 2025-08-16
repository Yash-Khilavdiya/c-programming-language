#include <stdio.h>
struct sumvector{
    int x;
    int y;
};
struct sumvector sum (struct sumvector v1, struct sumvector v2 ){
    
    struct sumvector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;


return result;
}
int main (){

    struct sumvector v1;

    v1.x=3;
    v1.y=4;



    struct sumvector v2;
    v2.x=7;
    v2.y=9;

struct sumvector c=sum(v1,v2);

printf ("The vector sum of v1 and v2 is %d and %d \n", c.x, c.y);

return 0;

}

