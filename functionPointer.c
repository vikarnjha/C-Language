#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int greet(int a)
{
    char name[25];
    printf("Enter your name:-");
    gets(name);
    printf("Good morning %s",name);
    return 0;
}

int main()
{
    printf("%s\n",greet(1));
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // Testing the function
    int (*fPtr)(int, int);                           // Declaring a function pointer
    fPtr = sum;                                      // Creating a function pointer
    int d = (*fPtr)(4, 6);                           // Dereferencing a function pointer
    printf("The value of d is %d\n", d);
    return 0;
}
