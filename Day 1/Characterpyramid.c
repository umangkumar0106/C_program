#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<i+1;k++)
        {
            printf("%c",k+'A');
        }
        int q=i-1;
        for(l=1;l<i+1;l++)
        {
            printf("%c",q+'A');
            q--;
        }
        printf("\n");
    }
}