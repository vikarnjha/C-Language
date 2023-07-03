#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);

    printf("Enter your marks\n");
    scanf("%d",&marks);

    switch (age)
    {
    case 2:
        printf("Your age is 2\n");
        
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;
        
        default:
            printf("Your marks are not 45\n");
            break;
        }

        break;

        case 12:
        printf("Your age is 12\n");
        
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;
        
        default:
            printf("Your marks are not 45\n");
            break;
        }
        break;

        case 22:
        printf("Your age is 22\n");
        
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;
        
        default:
            printf("Your marks are not 45\n");
            break;

        }    
        break;
        
    default:
    printf("Your age is not 2, 12 or 22\n");
        break;
    }
    return 0;
}