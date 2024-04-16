#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,k;
    printf("Enter elements of your array: \n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of this matrix is: \n");
    for( i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
     printf("\n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
