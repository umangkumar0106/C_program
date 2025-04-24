#include<stdio.h>
void main()
{
    int cm,kg;
    float m,g;
    printf("Enter the values in CM & KG");
    scanf("%d%d",&cm,&kg);
    m=cm/100;
    g=kg*1000;
    printf("Enter the values in M  & G %f %f",m,g);


}