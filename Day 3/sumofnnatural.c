#include<stdio.h>
int sumOfNumber(int n)
{
    if(n==0)
    {   
       
       return 0;
       
        
    }
    else{
        return n+sumOfNumber(n-1);
        //printf(" % d ",n); 
    }
}
int main()
{
    int n ,sum;
    printf("Enter the number");
    scanf("%d",&n);
    sum=sumOfNumber(n);
    printf("sum of series %d",sum);
    return 0;
}
