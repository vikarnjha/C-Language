#include <stdio.h>
// #include "age.c"
int func1(int a, int b)
{
    // auto int var;
    static int svar;
    svar++;
    printf("The value of static variale is %d\n", svar);
    return svar;
}
int main()
{
    register int svar = func1(2, 5);
    printf("The value of static variable is %d\n", svar);
    svar = func1(2, 5);
    svar = func1(2, 5);
    svar = func1(2, 5);
    return 0;
}