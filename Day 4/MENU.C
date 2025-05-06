#include<stdio.h>
int main()
{
    int n;
    printf("Enter your choice");
    scanf("%d",&n);
    switch(n)
    {
    case 1:printf("Burger");
            break;
    case 2:printf("Pizza");
            break;
    case 3:printf("cake");
            break;
    case 4:printf("cofee");
            break;
    default: printf("You entered a wrong choice");
     }
    return 0;
}