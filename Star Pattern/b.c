#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 1 & (j == 1 || j == 2 || j == 3))
            {
                printf(" ");
            }

            else if (i == 3 & (j == 1 || j == 2 || j == 3))
            {
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}