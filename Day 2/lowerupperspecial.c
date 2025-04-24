#include<stdio.h>
void main()
{
    char m;
    printf("Enter the character");
    scanf("%c",&m);
    if(m>='A'&& m<='Z')
    {
        printf("The character is in Uppercase");
    }
    else if(m>='a'&& m<='z')
    {
        printf("The character is in lowercase");
    }
    else{
        printf("The character  is special character");
    }
}