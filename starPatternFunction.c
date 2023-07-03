#include<stdio.h>
#include<conio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <=rows-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows,type;
    printf("Enter 0 for Star pattern and 1 for Reverse Star pattern:-");
    scanf("%d",&type);
    printf("How many rows you want to print? ");
    scanf("%d",&rows);
    switch (type)
    {
    case 0:
        starPattern(rows);
        break;
    case 1:
        reverseStarPattern(rows);
        break;
    
    default:
        printf("You have entered an invalid input.");
        break;
    }
    return 0;
}