#include <stdio.h>
int main() 
/*
{
char a = '3';
char* ptr = &a;
printf("%d \n",ptr);
ptr--;
printf("%d \n",ptr);
printf("%d \n",ptr-2);
return 0;
}
*/


{
    int arr[]={12,13,14,15,16,17,18};
    // int* arrayptr=arr;
    printf("The value of array at position 3 is :-%d \n",arr[3]);
    printf("The address of first element of the array is :-%d \n",&arr[0]);
    printf("The address of first element of the array is :-%d \n",arr);
    printf("The address of second element of the array is :-%d \n",&arr[1]);
    printf("The address of second element of the array is :-%d \n",arr+1);
    printf("The address of third element of the array is :-%d \n",&arr[2]);
    printf("The address of third element of the array is :-%d \n",arr+2);

    printf("The value at address of first element of the array is %d \n",*(&arr[0]));
    printf("The value at address of first element of the array is %d \n",arr[0]);
    printf("The value at address of first element of the array is %d \n",*(arr));
    printf("The value at address of second element of the array is %d \n",*(&arr[1]));
    printf("The value at address of second element of the array is %d \n",arr[1]);
    printf("The value at address of second element of the array is %d \n",*(arr+1));
    return 0;
}