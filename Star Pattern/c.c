#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 || j == 0)
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