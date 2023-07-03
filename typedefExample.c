// Here there is a program to add 2 numbers but I am using typedef here
//programe to print addition of twor numbers
#include<stdio.h>

int main()
{
   typedef int pf;
   pf num1,num2;
   printf("Enter the first number=");
   scanf("%d", &num1);
   printf("Enter second number=");
   scanf("%d", &num2);
   printf("Addition of %d and %d is %d", num1,num2,(num1+num2));
   return 0;
}