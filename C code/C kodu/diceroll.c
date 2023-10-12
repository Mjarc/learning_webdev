#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int d4(int mod);
int d6(int mod);
int d8(int mod);
int d10(int mod);
int d12(int mod);
int d20(int mod);
void rollyn();

int main()
{
    srand(time(0));
    rollyn();
    return 0;
}

int d4(int mod)
{
    int dice;
    dice = (rand()%4)+1+mod;
    return dice;
}

int d6(int mod)
{
    int dice;
    dice = (rand()%6)+1+mod;
    return dice;
}

int d8(int mod)
{
    int dice;
    dice = (rand()%8)+1+mod;
    return dice;
}

int d10(int mod)
{
    int dice;
    dice = (rand()%10)+1+mod;
    return dice;   
}

int d12(int mod)
{
    int dice;
    dice = (rand()%12)+1+mod;
    return dice;
}

int d20(int mod)
{
    int dice;
    dice = (rand()%20)+1+mod;
    return dice;
}

void rollyn()
{
    char a;
    do
    {
        printf("Modifier : ");
        int mod;
        scanf("%d", &mod);
        printf("d?: ");
        int side;
        scanf("%d", &side);
        int dice;
        switch(side)
        {
            case 4:
            dice=d4(mod);
            printf("Your roll is: %d \n",dice);
            break;
        
            case 6:
            dice=d6(mod);
            printf("Your roll is: %d \n",dice);
            break;

            case 8:
            dice=d8(mod);
            printf("Your roll is: %d \n",dice);
            break;

            case 10:
            dice=d10(mod);
            printf("Your roll is: %d \n",dice);
            break;
        
            case 12:
            dice=d12(mod);
            printf("Your roll is: %d \n",dice);
            break;

            case 20:
            dice=d20(mod);
            printf("Your roll is: %d \n",dice);
            break;

            default:
            printf("Incorrect amount of sides! \n");
            break;
        }
        printf("Roll again?(Y/N): ");
        scanf(" %c", &a );
        a=toupper(a);
    }while (a=='Y');
}