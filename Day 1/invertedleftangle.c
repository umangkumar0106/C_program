#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<n-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}