#include<stdio.h>
#include<conio.h>

int main()
{
    // 2-D array
    int Matrix[3][3];
    printf("This program will print numbers in Matrix form ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter number (1-9) :");
            scanf("%d",&Matrix[i][j]);
        }
    }
     printf("Hence the matrix form of number from 1-9 is :-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}