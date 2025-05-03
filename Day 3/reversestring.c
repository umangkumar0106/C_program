#include<stdio.h>
#include<string.h>    
void reverse(char s[],int st,int ed)
{
if(st>=ed)
{
    return ;
}
else{
    char temp=s[st];
    s[st]=s[ed];
    s[ed]=temp;
    reverse(s,st+1,ed-1);
}
}
int main()
{
    char s[50] ,rev;
    int st,ed,l;
    printf("Enter the string");
    scanf("%s",s);
    l=strlen(s)-1;
    reverse(s,0,l);
    printf("%s",s);
    return 0;
}

