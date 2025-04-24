#include<stdio.h>
void main()
{
    int a,b,i,gcd=0,lcm=0;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("The GCD of two is %d",gcd);
    printf("The LCM of two no is %d",lcm);
}