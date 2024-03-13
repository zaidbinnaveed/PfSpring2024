#include<stdio.h>
int main()
{
    int arr[10],average,sum=0,max,min;
    for(int i=0;i<=9;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(int j=1;j<=9;j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
        }
        else if(min>arr[j])
        {
            min=arr[j];
        }
    }
    average=sum/10;
    printf("Average is %d\n",average);
    printf("%d is the largest number in the array\n",max);
    printf("%d is the smallest number in the array\n",min);
    return 0;
}
