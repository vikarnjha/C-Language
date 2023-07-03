#include <stdio.h>

int main()
{
    int n = 7;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == 4 || i+j==5)
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