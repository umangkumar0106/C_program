#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        { 
            if(j==0||i==n-1||j==i){
            printf("*");
           }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}