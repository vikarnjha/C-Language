#include<stdio.h>
#include<conio.h>

void printStar(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
      printf("%c",str[i]);
      i++;
    }
    printf("\n");

}
int main()
{
//  char str[]={'V','i','k','a','r','n','\0'};
//  char str[7]="Vikarn";
 char str[35];
 gets(str);
 printf("Using printf function %s \n",str);
 printf("Using custom function printStar:- ");
 printStar(str);
 printf("Using puts:- \n");
 puts(str);
 return 0;
}
