#include <stdio.h>

int main()
{
    int a;
    printf("enter your rating\n");
    scanf("%d", &a);

    switch(a)
    {
    case 1:
        printf("your rating is 1");
        break;

            case 2 : printf("your rating is 2");
        break;
            case 3 : printf("your rating is 3");++
        break;

            case 4 : printf("your rating is 4");
        break;

            case 5 : printf("your rating is 5");
        break;

            default: printf("invalid rating");
        break;
    }
    
    return 0;
}










// #include <stdio.h>

// int main()
// {
//     int marks;
//     printf("enter your marks");
//     scanf("%d", &marks);

//     switch(marks)
//     {
//     case 0-20:
//         printf("your rating is F");
//         break;

//             case 21: printf("your rating is 2");
//         break;
//             case 30: printf("your rating is 3");
//         break;

//             case 40 : printf("your rating is 4");
//         break;

//             case 50 : printf("your rating is 5");
//         break;

//             default: printf("invalid rating");
//         break;
//     }
    
//     return 0;
// }



//you can not use switch case for the above case