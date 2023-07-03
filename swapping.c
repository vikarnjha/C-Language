#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of a :-");
    scanf("%d", &a);
    printf("Enter the value of b :-");
    scanf("%d", &b);
    printf("\nValue of a and b before swapping.");
    printf("\nValue of a = %d", a);
    printf("\nValue of b = %d", b);
    temp = a;
    a = b;
    b = temp;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    printf("\nValue of a and b after swapping.");
    printf("\nValue of a = %d", a);
    printf("\nValue of b = %d", b);
    return 0;
}