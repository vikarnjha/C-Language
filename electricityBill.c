#include<stdio.h>
int main()
{
    float unit,rate,bill;
    printf("Enter no of units consumed:-");
    scanf("%f",&unit);
    printf("Enter the rate per unit:-");
    scanf("%f",&rate);
    bill=(unit*rate)+(unit*rate*2/100);
    printf("Your Electricity bill amount is %.2f",bill);
    return 0;
}