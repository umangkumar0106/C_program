#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<i+1;k++)
        {
           // printf("* ");
            if(i==n-1||j==0||j==i+1)
            {
                printf("* ");
            }
            // else {
            //     printf("  ");
            // }
        }
        printf("\n");
    }
}