#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

void playagain();
void game();

int main()
{
    srand(time(0));
    playagain();
    return 0;
}

void game()
{
    int num = (rand()%100+1);
    int guess;
    do
    {
        printf("\nYour guess: ");
        scanf(" %d", &guess);
        if(guess==num)
        {
            printf("\nCorrect! \n");
        }
        else if(guess > num)
        {
            printf("\nToo high! \n");
        }
        else if(guess < num)
        {
            printf("\nToo low! \n");
        }
    }while(guess!=num);
}

void playagain()
{
    char yn;
    do
    {
        game();
        printf("\nPlay again(Y/N)?: ");
        scanf(" %c", &yn);
        yn=toupper(yn);
    }while (yn=='Y');
}