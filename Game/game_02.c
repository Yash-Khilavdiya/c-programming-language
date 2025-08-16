
//NOTA WORKING PROPERLY

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

        scanf("%c", &you);

        if (comp == you)
        {
            i--;
            continue;
        }

        game = snakewatergun(comp, you);
        score = score + game;
    }

    if (score > 5)
    {
        printf("\ncongratulations!!! you win\nyour score is %d", score);
    }

    else if (score <= 5)
    {
        printf("your score is %d", score);
        score = (10 - score);
        printf("\nsorry!! you lose\nComputer score is %d", score);
    }
    return 0;
}




// char start;

// printf("The random variable genrated is %d\n",comp);s

// printf("Press ENTER to start game \n");
// scanf("%c", &start);
//  printf("Your score is %d" , score);
//  printf("%d\n", game);