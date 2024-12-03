// Write a program to calculate area of a rectangle. Input appropriate data from the user

#include<stdio.h>
int main()
{
    int l,b,a;
    printf("Enter length and Breadth of a calculate area of a rectangle ");
    scanf("%d %d",&l,&b);
    a = l * b;
    printf("area of a rectangle is %d :",a);
    return 0;
}
   