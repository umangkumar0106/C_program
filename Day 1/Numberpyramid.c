#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i+1;k++)
        {
            printf("%d",k);
        }
        int q=i;
        for(l=0;l<i;l++)
        {
            printf("%d",q);
            q--;
        }
        printf("\n");
    }
}