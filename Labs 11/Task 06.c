#include<stdio.h>

int processArray(int size, int arr[size],int stats[3])
{
    int sum=0;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
        sum+=arr[i];   
    }
    stats[0]=sum;
    stats[1]=max;
    stats[2]=min;
   
}
int main()
{
    int size,result,stats[3];
    printf("Enter size of your array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    processArray(size,arr,stats);
    printf("Sum=%d\n",stats[0]);
    printf("Max=%d\n",stats[1]);
    printf("Min=%d\n",stats[2]);
    return 0;
}
