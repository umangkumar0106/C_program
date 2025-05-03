#include<stdio.h>
int facto(int n)
{
    if(n==0)
    {
        return 1;
    }
    else {
        return (n*facto(n-1));
    }
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",facto(n));
    // fact(n);
    //  for(i=1;i<=n;i++)
    //  {
    //      fact=fact*i;
    //  }
    //   printf("%d",fact);
    // return 0;
}
