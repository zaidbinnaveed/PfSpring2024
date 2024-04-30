#include<stdio.h>
void reverse(int* arr, int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int main()
{
    int size=10;
    int arr[size];
    printf("Enter elements : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
    printf("Array after reversing : \n");
    for(int j=0;j<size;j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}
