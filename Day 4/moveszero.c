#include<stdio.h>
int movesZeros(int arr[],int n)
{   
    int i,j=0,temp;
    // for( i=0;i<n;i++)
    // {
    //      if(arr[i]!=0)
    //         {
    //             arr[j++]=arr[i];
    //         }
    // }
    //  while(j<n)
    //  {
    //     arr[j++]=0;
    //  }    
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;

        }
    }
    for(i=0;i<n;i++)
    {
    printf(" %d ",arr[i]);
    }
}



int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    movesZeros(arr,n);
}