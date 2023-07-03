#include <stdio.h>
#include <conio.h>

int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("\n ̥The value at %d is %d", i, arr);
    }
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("\n ̥The value at %d is %d", i, *(ptr + i));
    }
    // *(ptr + 2) = 65;  value will change globaly.
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\n ̥The value of %d,%d is %d", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    printf("\n ̥The value at index 0 is %d", arr[0]);
    func1(arr);
    printf("\n ̥The value at index 0 is %d", arr[0]);
    func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}