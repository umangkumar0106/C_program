#include<stdio.h>
#include<string.h>
void isPalindrome(char a[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    if(a[s]!=a[e])
    {
        return ;
    }
    else{
        return isPalindrome(a,s+1,e-1);
    }
}
int main()
{
    char a[100];
    printf("Enter the character");
    scanf("%s",a);
    int  l=strlen(a)-1;
    isPalindrome(a,0,l);
    )
    {
        printf("%s is a palindrome",a);
    }
    else{
        printf("%s is not a palindrome",a);
    }
    return 0;
}