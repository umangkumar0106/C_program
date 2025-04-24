#include<stdio.h>
void main()
{
    int n ,f=0,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("Nuumber is prime");
    }

    else
   {
    printf("Number is not prime");
   }
}