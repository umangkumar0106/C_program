#include<stdio.h>
int evenOdd(int arr[],int size)
{
    int evenSum=0,oddSum=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            evenSum=evenSum+arr[i];
        }
        else{
            oddSum=oddSum+arr[i];
        }
    }
     printf(" The sum of even numbers %d",evenSum);
     printf("\n");
     printf(" The sum of odd numbers %d",oddSum);
     return 0;

}
int divisible(int arr[],int size)
{
    int result=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%3==0 && arr[i]%4==0)
        {
            printf("%d \n",arr[i]);
            //result=result+arr[i];
        }
    }
    printf("The sum are %d",result);
    return 0;
}

// int countDigit(int arr[],int size)
// {   int c=0,r;
//     while(a[i]>0)
//     {
//         c++;
//         a[i]=a[i]/10;
//     }


    // for(int i=0;i<size;i++)
    // {
    //     n=arr[i];
    //     while(n<0)
    //     {
        
            
    //     }
    //     printf("%d",c);
    // }
    // printf("%d",d);



int main()
{
    do(){
    int size=3;
    char ans;
    // printf("Enter the Size");
    // scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    switch(num){
        case 1:evenOdd(arr,size);
            break;
        case 2:divisible(arr,size);
            break;
        //case 3:countDigit(arr,size);
          //  break;
        default:printf("You entered the wrong choice");
    }
   // int res1=evenOdd(arr,size);
    //int res2=divisible(arr,size);
    //int res3=countDigit(arr,size);
    printf("Do want to continue y or n");
    scanf("%c",&ans);
    }
    return 0;
}