#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }
}