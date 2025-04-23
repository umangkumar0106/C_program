#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the rows:");
    scanf("%d",&n);
    // for(i=0;i<n;i++)
    // {
    //     int q=i+1;
    //    for(j=1;j<=i+1;j++)
    //    {
    //     printf("%d",q);
    //     q--;
    //    }
    //     printf("\n");
    // }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n-i;k++)
        {
            printf("%d",k);
        }
        int q=i;
        printf("%d",q);
        // int q=n-i-1;
        // for(int l=1;l<n-i;l++)
        // {
        //     printf("%d",q);
        //     q--;
        // }
        printf("\n");
}
}