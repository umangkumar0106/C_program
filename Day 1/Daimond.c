#include<stdio.h>
int main()
{
    int i,j,k,n,l,m,o;
    printf("Enter the rows:");
    scanf("%d",&n);
    //upper half
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<i+1;k++)
        {
            printf("*");
        }
        for(l=1;l<i+1;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    //lower half
    for(i=1;i<n;i++)
    {
    for(j=0;j<i+1;j++)
    {
        printf(" ");
    }
    for(k=1;k<=n-i;k++)
    {
        printf("*");
    }
    for(l=1;l<n-i;l++)
    {
        printf("*");
    }
    printf("\n");
} 
}