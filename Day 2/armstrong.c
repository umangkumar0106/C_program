#include<stdio.h>
#include<math.h>
void main()
{
    int n,d=0,m,r,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    m=n;
    while(n>0)
    {
        n=n/10;
        d++;
    }
    n=m;
    while(n>0)
    {
        r=n%10;
         int power = 1;
        for (int i = 0; i < d; i++) {
            power =power*r;
        }
        sum=sum+power;
        //sum=sum+(int)pow(r,d);
        n=n/10;
    }
    if(sum==m)
    {
        printf("The number is armstrong");
    }
    else{
        printf("The number is not armstrong");
    }

}