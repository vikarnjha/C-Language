#include<stdio.h>
int main()
{
    float r;
    float pi=3.14;
    printf("\nEnter the length of radius :-");
    scanf("%f",&r);
    printf("Area of circle = %.2f",pi*r*r);
    printf("\nCircumference of circle = %.2f",2*pi*r);
    // getchar();
    return 0;
    }