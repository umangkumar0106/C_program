#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the rows");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        int q=i;
        for(j=i;j<=i+1;j++)
        {
            printf("%d",q);
            q--;
        }
        printf("\n");
    }
}