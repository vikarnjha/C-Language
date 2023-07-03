#include <stdio.h>

int main()
{
    int n = 7;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == 6 || (i == 1 & (j == 2 || j == 4)) || (i == 2 & j == 3))
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