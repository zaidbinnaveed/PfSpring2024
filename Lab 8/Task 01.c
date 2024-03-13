#include<stdio.h>
int main()
{
    int arr[10],n,counter=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<=9;i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=9;j++)
    {
        if(n==arr[j])
        {
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}
