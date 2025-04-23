#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        int c=1;
        for(j=1;j<=i;j++)
        {
        
            printf("%d",c);
            c=c*(i-j)/j;
            printf(" ");
        }
        printf("\n");
    }
}