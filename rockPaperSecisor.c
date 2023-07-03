#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    // rock>sesior || // paper>rock || // sesior>paper
    if (c1 == c2)
    {
        return -1;
    }
    if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore = 0, choose;
    char playerChar, compChar, user[20];
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper, Sesior.\n");
    printf("Enter your first name:- ");
    scanf("%s", user);
    for (int i = 1; i <= 3; i++)
    {
        // Taking User's turn
        printf("%s's Turn\n", user);
        printf("Choose:-\n1 for Rock.\n2 for Paper.\n3 for Sesior.\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            printf("%s chooses Rock\n", user);
            break;

        case 2:
            printf("%s chooses Paper\n", user);
            break;

        case 3:
            printf("%s chooses Sesior\n", user);
            break;
        default:
            break;
        }
        playerChar = dict[choose];

        // Genrating Emulator's turn
        choose = generateRandomNumber(3);
        switch (choose)
        {
        case 1:
            printf("Emulator chooses Rock\n");
            break;

        case 2:
            printf("Emulator chooses Paper\n");
            break;

        case 3:
            printf("Emulator chooses Sesior\n");
            break;
        default:
            break;
        }

        compChar = dict[choose];

        // Comparing the score
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("Emulator Got it!\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("Its a Draw!\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got it!\n");
        }
        printf("%s's score:- %d || Emulator's score:- %d\n", user, playerScore, compScore);
    }
    if (playerScore > compScore)
    {
        printf("*****You Win!*****");
    }
    else if (playerScore < compScore)
    {
        printf("*****You Loose!*****");
    }
    else
    {
        printf("*****Its a Draw!*****");
    }

    return 0;
}