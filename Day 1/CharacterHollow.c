#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    printf("Enter the rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%c",j+'A');
            
        }
        for(k=0;k<2*i;k++)
        {
            printf(" ");
        }
        
            int q=n-i-1;
            for(int m=0;m<n-i;m++)
        {
            printf("%c",q+'A');
            q--;
        }
        
        printf("\n");
    }
}

// for(l=1;l<i+1;l++)
        // {
        //     printf(" ");
        //}
        //  int q=n-i-1;
        //  if()
        // for(int m=0;m<n-i;m++)
        // {
        //     printf("%c",q+'A');
        //     q--;
        // }