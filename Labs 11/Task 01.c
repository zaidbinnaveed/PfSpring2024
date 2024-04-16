#include<stdio.h>
void swap(int arr[2],int arr2[2])
{
    for(int i=0;i<2;i++)
    {
        int temp=arr[i];
        arr[i]=arr2[i];
        arr2[i]=temp;
    }
}
    int main()
    {
        int i,j;
        int arr[2],arr2[2];
        for( i=0;i<2;i++)
        {
            printf("Enter number:\n");
            scanf("%d",&arr[i]);
        }
        printf("\n");
        printf("Your array is:\n");
        for(i=0;i<2;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        for( j=0;j<2;j++)
        {
            printf("Enter number:\n");
            scanf("%d",&arr2[j]);
        }
        printf("\n");
        printf("Your second array is:\n");
        for(i=0;i<2;i++)
        {
            printf("%d ",arr2[i]);
        }
        swap(arr, arr2);
        printf("\nArray 1 after swapping:\n");
        for( i=0;i<2;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\nArray 2 after swapping:\n");
        for( j=0;j<2;j++)
        {
            printf("%d ",arr2[j]);
        }
    return 0;
}
