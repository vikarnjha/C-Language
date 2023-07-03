#include<stdio.h>
#include<conio.h>

int main()
{
    int i,age;
    for ( i = 0; i<100; i++ )
    {
        printf("\n\nEnter 0 to quit the loop ");
        printf("\nEnter your age ");
        scanf("%d", &age);
        if (age>=18)
        {
         printf("Your vote response have been recorded !");
        }
        else if (age==0)
        {
            goto end;
        }
        
        else
        printf("You are not eligible to vote !");
       
    }
     end:
     return 0;
}