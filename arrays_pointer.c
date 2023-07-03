#include<stdio.h>
int main()
{
    int i,a[5],*p;
    p=&a[0];                        // Here we can also write &a or a
    for ( i = 0; i <= 4; i++)   
    {
        scanf("%d",p+i);            // This will take input in array
    }
    for ( i = 0; i <=4; i++)
    {
        printf("%d",*(p+i));        // This will print arrays values̥
    }
    return 0;
}