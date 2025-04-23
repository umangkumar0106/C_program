#include<stdio.h>
int main()
{
    int i,j,k,l,n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n-i;k++)
        {
            printf("%d",k);
        }
            int q=n-i-1;
        for(l=1;l<n-i;l++)
            {
                printf("%d",q);
                q--;
            }
        printf("\n");
    }
    
}
