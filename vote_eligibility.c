#include<stdio.h>
int main()
{
   int age;
   printf("Enter your age ");
   scanf("%d",&age);
   printf("Your age is %d",age);
   if (age>=18)
   {
    printf("\nYou are eligible to vote");
   }
   else if (age>=13)
   {
    printf("\nYou are teanager and You can vote for Babies");
   }
   else if (age=12)
   {
      printf("\nYou are going to achive teanage");
   }
   
   else
   {
    printf("\nYou are not eligible to vote");
   }
   
   return 0;
}