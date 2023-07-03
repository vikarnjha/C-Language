#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float area;
pi = 3.14;

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(a);
}

// float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
// {
//     eara = Edistance(x1, y1, x2, y2) * pi;
//     return area;
// }

int main()
{
    int x1, y1, x2, y2;
    // Take x1, y1 and x2, y2 from the user using scanf
    printf("Enter the value of x1:-");
    scanf("%d", &x1);

    printf("Enter the value of y1:-");
    scanf("%d", &y1);

    printf("Enter the value of x2:-");
    scanf("%d", &x2);

    printf("Enter the value of y2:-");
    scanf("%d", &y2);
    // dst = areaOfCircle(x1, y1, x2, y2, Edistance);
    area = Edistance(x1, y1, x2, y2) * pi;
    // printf("The distance between these points is %.2f", dst);
    printf("The area of circle between these points is %.2f", area);
    return 0;
}
