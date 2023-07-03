#include<stdio.h>

struct programing
{
    char title[50];
    char author[50];
    int pages;
    float timetaken;
};

int main()
{
    struct programing b1 = {"C Programing Language","Tutorials Point",256,45.34};
    printf("The %s tutorials by:- %s\nHaving %d pages and Estimated time to complete this tutorial is %.2fhrs.",b1.title,b1.author,b1.pages,b1.timetaken);
    return 0;
}