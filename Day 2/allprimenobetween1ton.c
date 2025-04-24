#include<stdio.h>
void main()
{
    int n, f=0,num,i;
    printf("Enter the number ");
    scanf("%d",&n);
    for(num=1;num<=n;num++)
    {
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                f++;
                break;
            }
        }
        if(f==0 && num!=1)
    {
        printf("%d",num);
    }
    }
}