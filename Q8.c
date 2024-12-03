// Write a program to calculate square of a given number. Number is entered by the user.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number for Calculate Square");
    scanf("%d",&a);
    b = a * a;
    printf("The square of %d is %d.\n", a, b);
    return 0;
    
}