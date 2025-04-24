#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number is positive");
    }
    else if(n==0)
    {
        printf("Number is zero");
    }
    else
    {
        printf("Number  is negative");
    }
}