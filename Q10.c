/* Write a program to find the area of the circle.
Take radius of circle from user as input and print the result in below given format */

#include <stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter the Radius of a Circle");
    scanf("%d", &r);
    a = 3.14 * r * r;
    printf("Area is %f having the Radius", a, r);

    return 0;
}
