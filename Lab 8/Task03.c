#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
    {
        if(arr[j]%2==0)
        {
            printf("*\n");
        }
        else
        {
            printf("%d\n",arr[j]);
        }
    }
    return 0;
}
