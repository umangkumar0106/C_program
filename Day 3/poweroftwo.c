#include<stdio.h>
int power(int n)
{
    if(n==0)
    {
      return 1; 
    }
    else{
        return (2*power(n-1));
    }
}
int main()
{
    int n,p;
    printf("Enter the number");
    scanf("%d",&n);
    p=power(n);
    printf("Power of two %d",p);
    return 0;
}

