#include<stdio.h>
int count(int n)
{ 
    if(n==0)
    {
        return 0;
    }
    else {
        return 1+count(n/10);
    }  
}
int main()
{
    int n;
    printf("Enter the digit");
    scanf("%d",&n);
    printf("\n The count of digit %d",count(n));
    return 0;
}
