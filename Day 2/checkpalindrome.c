#include<stdio.h>
void main()
{
    int n,r,m,rev=0;
    printf("Enter the number");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(m==rev)
    {
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
}