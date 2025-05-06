#include<stdio.h>
int secondLargest(int arr[],int n)
{
    int  largest=0 ,secondLargest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=secondLargest;
        }
        else{
            if(arr[i]!=0 && arr[i]<largest)
            {
                secondLargest=arr[i];
            }
        }
    }
    printf("The second largest number is %d",secondLargest);

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
    int result=secondLargest(arr,n);
    return 0;
}