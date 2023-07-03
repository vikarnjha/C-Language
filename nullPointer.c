#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = NULL;
    ptr = &a;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *(int*)ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
    return 0;
}