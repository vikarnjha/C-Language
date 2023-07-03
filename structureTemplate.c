#include<stdio.h>

struct student
{
    char name[25];
    char cource[25];
    int reg;
};

int main()
{
    struct student s1={"Vikarn", "BCA", 21094};
    // struct student s2={"Anupam","BCA",21095};
    strcpy(s1.cource,"Alpha"); //Here only cource will change
    printf("\n Name:-%s",s1.name);
    printf("\n Cource:-%s",s1.cource);
    printf("\n Reg No:-%d",s1.reg);
    return 0;
}