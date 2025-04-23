#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("Enter the rows");
    scanf("%d",&n);
    int size=2*n-1;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==0||j==0||i==size-1||j==size-1||i==j|j==size-i-1)
            {
                printf("*");
            }
            else{
                printf(" ");
                }
        }
        printf("\n");
    }
}