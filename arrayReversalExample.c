#include <stdio.h>
/*
Before reversal 1,2,3,4,5,67;
Before reversal 67,5,4,3,2,1;
*/
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 6/2; i++)
    {
        // swap item arr[i] with arr[i-1]
        temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }
}
void arrayPrint(int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 67};
    printf("Value of array before swapping\n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("Value of array after swapping\n");
    arrayPrint(arr);
    return 0;
}