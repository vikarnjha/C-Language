#include <stdio.h>

int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (i + j == 5)
            {
                printf("*");
            }
            else if (j - i == 6)
            {
                printf("*");
            }
            else if (i == 3 & (j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
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