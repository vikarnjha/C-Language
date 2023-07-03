#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
        // Use of malloc
        int *ptr;
        int n;
        printf("Enter the size of array you want to create :-");
        scanf("%d", &n);
        ptr = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            printf("Enter value of i(%d) of this array\n", i);
            scanf("%d", &ptr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("The value of i(%d) of this array is %d\n", i, ptr[i]);
        }
        return 0;

        // Use of calloc
        int *ptr;
        int n;
        printf("Enter the size of array you want to create :-");
        ptr = (int *)calloc(n, sizeof(int));
        for (int i = 0; i < n; i++)
        {
            printf("Enter value of i(%d) of this array\n", i);
            scanf("%d", &ptr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("The value of i(%d) of this array is %d\n", i, ptr[i]);
        return 0;
    */

    // Use of realloc
    int *ptr;
    int n;
    printf("Enter the size of array you want to create :-");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of i(%d) of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of i(%d) of this array is %d\n", i, ptr[i]);
    }
    return 0;
    free(ptr);
}