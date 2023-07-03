#include <stdio.h>
#include<string.h>

union student
{
    char name[25];
    char cource[25];
    int reg;
};

int main()
{
    union student s1 = {"Vikarn", "BCA", 21094};
    // struct student s2={"Anupam","BCA",21095};
    // union student s1;
    s1.reg=21095;   //Here all character string will change and other data-type will return garbage value
    strcpy(s1.cource,"Alpha");
    printf("\n Name:-%s", s1.name);
    printf("\n Cource:-%s", s1.cource);
    printf("\n Reg No:-%d", s1.reg);
    return 0;
}