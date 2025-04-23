#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("  ");
        }
        for(k=0;k<n-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
// lower half
    for(i=1;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("  ");
        }
        for(k=0;k<i+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}