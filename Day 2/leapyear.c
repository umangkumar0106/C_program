#include<stdio.h>

void main()
{
    int n;
    printf("Enter the year");
    scanf("%d",&n);
    if(n%400==0 && n%100!=0||n%4==0)
    {
        printf("The year is leap year");
    }
    else
    {
        printf("The year is not leap year");
    }
}