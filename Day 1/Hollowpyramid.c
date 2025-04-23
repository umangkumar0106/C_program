#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the rows ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        for(k=1;k<i+1;k++)
        {
            printf(" ");
        }
        for(l=1;l<i+1;l++)
        {
            printf(" ");
        }
        for(int m=0;m<n-i;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower half

    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("*");
        }
        for(k=1;k<n-i;k++)
        {
            printf(" ");
        }
        for(l=1;l<n-i;l++)
        {
            printf(" ");
        }
        for(int m=0;m<i+1;m++)
        {
            printf("*");
        }
        printf("\n");
    }
}