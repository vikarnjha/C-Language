// Write a program to enter temperature in F and convert into C
#include<stdio.h>

int main()
{
    int f,c;
    printf("Enter temperature in Fahrenheit:-");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("Value of %dF=%dC",f,c);
    return 0;
}