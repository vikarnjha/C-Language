#include<stdio.h>

int staticFunc()
{
    static int a=0;
    a++;
    return a;
    
}
int main()
{
    printf("Value of a is %d\n",staticFunc());
    printf("Value of a is %d\n",staticFunc());
    printf("Value of a is %d\n",staticFunc());
    printf("Value of a is %d\n",staticFunc());
    printf("Value of a is %d\n",staticFunc());
    return 0;
}