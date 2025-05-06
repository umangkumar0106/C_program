#include<stdio.h>
int Largest(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
         
        if(arr[i]>res)
        {
        res=arr[i];
        } 
    }
    printf("The result is %d",res);
    return 0;
}

int main()
{
    int n;
    printf("Enter the size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result=Largest(arr,n);
    return 0;
}