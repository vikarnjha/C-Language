#include <stdio.h>
#include <conio.h>
void main()
{
    float kg, grms;
    printf("Enter unit in terms of Kg:-");
    scanf("%f", &kg);
    grms = kg * 1000;
    printf("\nValue of %.2fKg=%.2fGrams.", kg, grms);
    getch();
}