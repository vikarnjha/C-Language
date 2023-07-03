#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j == 0 || j == 5 || j - i == 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}