#include<stdio.h>
void main()
{
    char a;
    printf("Enter the character");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("The alphabhet  is vowel");
    }
    else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {

        printf("The alphabet is vowel");
    }
    else{
        printf("The alphabet is constant");
    }
}