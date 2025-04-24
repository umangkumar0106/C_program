#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    // if(a+b>c&&b+c>a&&c+a>b)
    // {
    //     printf("The traingle is valid on the basis of side");
    // }
    // else{
    //     printf("The traingle is not valid on the basis of side");
    // }
    if(a+b+c<=180)
    {
        printf("The traingle is valid on the basis of  angle");
    }
    else{
        printf("The  traingle is not valid on the basis of angle");
    }
}
