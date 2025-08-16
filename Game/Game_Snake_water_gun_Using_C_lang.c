/* Description of game:- 
In this game if you choose gun and computer chooses snake you have killed the snake and earned one point and vice versa, if you choose snake and computer chooses water so you have made water poisonoues and you get 1 point and vice-versa, if you had choosen water and computer has choosen gun then shooting the gun in the water will not affect the water so you get 1 point. You will get 10 chances to play and at the end of the game the score will be declared since there is also negative scores so score can be less than 0 as well as greater than 10. If both computer and you choose the same input so that chance will not be counted it may seem that the number of chances has increased but actually there only 10 chances. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakewatergun(char comp, char you)
{

    if (you == comp)
    {
        return 0;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }

    else if (you == 'g' && comp == 'w')
    {
        return (-1);
    }

    else if (you == 'w' && comp == 's')
    {
        return 1;
    }

    else if (you == 's' && comp == 'w')
    {
        return (-1);
    }

    else if (you == 's' && comp == 'g')
    {
        return (-1);
    }

    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
}

int main()
{

    srand(time(0));

    int score = 0;
    int game = 0;
    int c;
    char comp;
    char you;
    c = rand() % 100;

    printf("How to Play : \n");
    printf("Press 's' for snake \n 'w' for water \n 'g' for gun\n");
    printf("Let us start the game\n");

    for (int i = 0; i < 10; i++)
    {

        if (c <= 33)
        {
            comp = 'g';
        }

        else if (c > 33 && c <= 66)
        {
            comp = 'w';
        }

        else if (c > 66 && c <= 100)
        {
            comp = 's';
        }

        printf("Your turn\n");

        scanf("%s", &you);
        if (you == 's' || you == 'w' || you == 'g')
        {
            {
                if (comp == you)
                {
                    i--;
                    continue;
                }

                game = snakewatergun(comp, you);
                score = score + game;
            }
        }
    

        else
        {
            printf("Please Enter a valid , such as 's', 'w', 'g'\n");
            continue;
        }

    }

        if (score > 5)
        {
            printf("\ncongratulations!!! you win\nyour score is %d\n", score);
            printf("Computer's score is %d\n", 10-score);
        }

        else if (score <= 5)
        {
            printf("your score is %d", score);
            score = (10 - score);
            printf("\nsorry!! you lose\nComputer score is %d", score);
        }
        return 0;
    }       
