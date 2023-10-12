#include <stdio.h>
#include <ctype.h>

void playagain();
void game();

int main()
{
    playagain();
    return 0;
}

void game()
{
    char questions[][100] = {"What year did the C language debut?: ",
                             "Who created C?: ",
                             "What is the predecessor of C?: "};

    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};

    int numberofquestions = sizeof(questions)/sizeof(questions[0]);

    char answers[3] = {'B', 'A', 'B'};

    char guesses[numberofquestions];
    
    printf("The quiz begins!\n");
    int score=0;
    for(int i=0; i<numberofquestions; i++)
    {
        printf("%s\n", questions[i]);
        for(int j=(i*4); j<(i*4)+4;j++)
        {
            printf("%s\n", options[j]);
        }
        printf("Your guess: ");
        char guess;
        scanf(" %c", &guess);
        guess=toupper(guess);
        if (guess==answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }
    printf("Your final score is: %d/%d\n", score, numberofquestions);
}

void playagain()
{
    char yn='Y';
    do
    {
        game();
        printf("Play again?(Y/N): \n");
        scanf(" %c", &yn);
        yn=toupper(yn);
    } while (yn=='Y');
    printf("Thanks for playing!\n");
}