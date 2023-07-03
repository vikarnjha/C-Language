#include <stdio.h>

int main()
{
    char input;
    float kmsToMile = 0.621371;
    float inchToFoot = 0.0833333;
    float cmsToInch = 0.393701;
    float poundToKgs = 0.453592;
    float inchToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter your input type :-\n Enter Q/q to exit. \n 1.Kms to Mile.\n 2.Inch to Foot. \n 3.Cms to Inch.  \n 4.Pound to Kgs. \n 5.Inch to Meters. :-");
        scanf("%c",&input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;

        case '1':
        printf("Enter the quantity of your input :-");
        scanf("%f",&first);
        second = first*kmsToMile;
        printf("%.3f Kms = %.3f Miles",first,second);
        break;

        case '2':
        printf("Enter the quantity of your input :-");
        scanf("%f",&first);
        second = first*inchToFoot;
        printf("%.3f Inch = %.3f Foot",first,second);
        break;

        case '3':
        printf("Enter the quantity of your input :-");
        scanf("%f",&first);
        second = first*cmsToInch;
        printf("%.3f Cms = %.3f Inch",first,second);
        break;

        case '4':
        printf("Enter the quantity of your input :-");
        scanf("%f",&first);
        second = first*poundToKgs;
        printf("%.3f Pound = %.3f Kgs",first,second);
        break;

        case '5':
        printf("Enter the quantity of your input :-");
        scanf("%f",&first);
        second = first*inchToMeters;
        printf("%.3f Inch = %.3f Meters",first,second);
        break;

        default:
        printf("Entered value is not in the list.");
            break;
        }
    }
    end :
    return 0;
}