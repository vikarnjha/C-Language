#include <stdio.h>
#include <conio.h>

// Here factorial is the user defined function
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int  i;
    for (i = 1; i < 5; i++)
    {
        int num;
        printf("\nEnter the number you want the factorial of ");
        scanf("%d", &num);
        printf("The factorial of %d is %d.", num, factorial(num));
    }

    return 0;
}