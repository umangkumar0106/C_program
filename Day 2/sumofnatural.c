#include<stdio.h>
int main()
{
    int n ,sum=0,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of number are %d",sum);
    return 0;
}