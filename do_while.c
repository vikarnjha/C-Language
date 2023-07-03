// Counting upto n terms
#include<stdio.h>
int main()
{
int num,i=0;
printf("Enter any number ");
scanf("%d", &num);

do
{
    printf("%d \n",i+1);
    i=i+1;
} while (i<num);
return 0;

}